// Binary Search Tree Class
class Node {
  constructor(data) {
      this.data = data;
      this.left = null;
      this.right = null;
  }
}

class BinarySearchTree {
  constructor() {
      this.root = null;
  }

  insert(data) {
      const newNode = new Node(data);
      if (this.root === null) {
          this.root = newNode;
      } else {
          this.insertNode(this.root, newNode);
      }
  }

  insertNode(node, newNode) {
      if (newNode.data < node.data) {
          if (node.left === null) {
              node.left = newNode;
          } else {
              this.insertNode(node.left, newNode);
          }
      } else {
          if (node.right === null) {
              node.right = newNode;
          } else {
              this.insertNode(node.right, newNode);
          }
      }
  }

  delete(data) {
      this.root = this.deleteNode(this.root, data);
  }

  deleteNode(node, data) {
    if (node === null) {
        return null;
    }
    if (data < node.data) {
        node.left = this.deleteNode(node.left, data);
    } else if (data > node.data) {
        node.right = this.deleteNode(node.right, data);
    } else {
        if (node.left === null) {
            return node.right;
        } else if (node.right === null) {
            return node.left;
        }
        node.data = this.findMinNode(node.right).data;
        node.right = this.deleteNode(node.right, node.data);
    }
    return node;
}

  findMinNode(node) {
      let current = node;
      while (current.left !== null) {
          current = current.left;
      }
      return current;
  }

  search(node, data) {
    if (node === null) {
        return false; // not found
    }
    if (data < node.data) {
        return this.search(node.left, data);
    } else if (data > node.data) {
        return this.search(node.right, data);
    } else {
        return true; // found
    }
  }

  findMin() {
    let current = this.root;
    while (current.left !== null) {
        current = current.left;
    }
    return current.data;
  }

  findMax() {
    let current = this.root;
    while (current.right !== null) {
        current = current.right;
    }
    return current.data;
  }

  inOrderTraverse(node, callback) {
    if (node !== null) {
        this.inOrderTraverse(node.left, callback);
        callback(node.data);
        this.inOrderTraverse(node.right, callback);
    }
}

  preOrderTraverse(node, callback) {
      if (node !== null) {
          callback(node.data);
          this.preOrderTraverse(node.left, callback);
          this.preOrderTraverse(node.right, callback);
      }
  }

  postOrderTraverse(node, callback) {
      if (node !== null) {
          this.postOrderTraverse(node.left, callback);
          this.postOrderTraverse(node.right, callback);
          callback(node.data);
      }
  }


}


const bst = new BinarySearchTree();

// D3 Visualization
const margin = { top: 20, right: 120, bottom: 20, left: 120 };
const width = 960 - margin.right - margin.left;
const height = 500 - margin.top - margin.bottom;
let svg;

function drawTree() {
  d3.select("svg").remove(); // Remove the old svg
  svg = d3.select("#bstContainer")
          .append("svg")
          .attr("width", width + margin.right + margin.left)
          .attr("height", height + margin.top + margin.bottom)
          .append("g")
          .attr("transform", "translate(" + margin.left + "," + margin.top + ")");

  update(bst.root);
}

function update(source) {
  // Tree layout
  const tree = d3.tree().size([width, height]);
  const nodes = d3.hierarchy(source, (d) => [d.left, d.right].filter(n => n));
  const treeData = tree(nodes);

  // Nodes
  const node = svg.selectAll(".node")
                  .data(treeData.descendants(), (d) => d.data.data);

  // Enter any new nodes
  const nodeEnter = node.enter().append("g")
                      .attr("class", "node")
                      .attr("transform", (d) => "translate(" + d.x + "," + d.y + ")");

  nodeEnter.append("circle")
          .attr("r", 10)
          .style("fill", "#fff");

  nodeEnter.append("text")
          .attr("dy", ".35em")
          .attr("x", (d) => d.children ? -13 : 13)
          .style("text-anchor", (d) => d.children ? "end" : "start")
          .text((d) => d.data.data);

  // Links
  const link = svg.selectAll(".link")
                  .data(treeData.links(), (d) => d.target.data.data);

  link.enter().insert("path", "g")
      .attr("class", "link")
      .attr("d", d3.linkVertical()
          .x((d) => d.x)
          .y((d) => d.y));
}

// Event Handlers
function insertNode() {
  const value = parseInt(document.getElementById("bstInput").value);
  if (!isNaN(value)) {
      bst.insert(value);
      drawTree();
  }
}

function deleteNode() {
  const value = parseInt(document.getElementById("bstInput").value);
  if (!isNaN(value)) {
      bst.delete(value);
      drawTree();
  }
}

function searchNode() {
  const value = parseInt(document.getElementById("bstInput").value);
  if (!isNaN(value)) {
      const found = bst.search(bst.root, value);
      displayMessage(found ? "Node found" : "Node not found");
  } else {
      displayMessage("Please enter a valid number");
  }
}

function displayMessage(message) {
  const messageElement = document.getElementById("message");
  messageElement.textContent = message;
  setTimeout(() => { messageElement.textContent = ''; }, 3000);
}

function highlightMin() {
  const minValue = bst.findMin();
  highlightNode(minValue);
}

function highlightMax() {
  const maxValue = bst.findMax();
  highlightNode(maxValue);
}

function highlightNode(value) {
  const nodes = d3.selectAll('.node')
                  .filter((d) => d.data.data === value);

  nodes.select('circle')
       .style('stroke', 'red')
       .style('stroke-width', '4px');

  setTimeout(() => {
      nodes.select('circle').style('stroke', 'steelblue').style('stroke-width', '3px');
  }, 2000); // Adjust the timeout duration as needed
}

function resetAndTraverse(traversalFunction) {
  delay = 0;
  traversalFunction();
}


function traverseInOrder() {
  bst.inOrderTraverse(bst.root, highlightAndDelay);
}

function traversePreOrder() {
  bst.preOrderTraverse(bst.root, highlightAndDelay);
}

function traversePostOrder() {
  bst.postOrderTraverse(bst.root, highlightAndDelay);
}

let delay = 0;

function highlightAndDelay(value) {
  setTimeout(() => {
      const nodes = d3.selectAll('.node')
                      .filter((d) => d.data.data === value);

      nodes.select('circle')
           .style('stroke', 'green')
           .style('stroke-width', '10px');

      setTimeout(() => {
          nodes.select('circle').style('stroke', 'steelblue').style('stroke-width', '3px');
      }, 500);
  }, delay);

  delay += 500; // Increment the delay for the next node
}



// Initializing the tree with an example
bst.insert(15);
bst.insert(10);
bst.insert(20);
drawTree();
