let queue = [];
let queueSizeLimit = 10; // Default queue size limit
const queueContainer = document.getElementById('queueContainer');
const message = document.getElementById('message');

// Function to render the queue on the webpage
function renderQueue() {
    queueContainer.innerHTML = '';
    queue.forEach((element) => {
        const node = document.createElement('div');
        node.className = 'queueElement';
        node.innerText = element;
        queueContainer.appendChild(node);
    });
}

// Function to show messages for user actions
function showMessage(msg, isSuccess = true) {
    message.textContent = msg;
    message.style.color = isSuccess ? 'green' : 'red';
    setTimeout(() => { message.textContent = ''; }, 3000);
}

// Function to set the queue size limit
function setQueueSize() {
    const size = parseInt(document.getElementById('queueSize').value, 10);
    if (size > 0) {
        queueSizeLimit = size;
        showMessage('Queue size limit updated.');
    } else {
        showMessage('Invalid size!', false);
    }
}

// Function to handle enqueue action
function enqueue() {
    if (queue.length >= queueSizeLimit) {
        showMessage('Queue overflow!', false);
        return;
    }
    const value = document.getElementById('queueInput').value;
    if (value) {
        queue.push(value);
        renderQueue();
        showMessage(`Enqueued: ${value}`);
    }
}

// Function to handle dequeue action
function dequeue() {
    if (queue.length > 0) {
        const dequeued = queue.shift();
        renderQueue();
        showMessage(`Dequeued: ${dequeued}`);
    } else {
        showMessage('Queue is empty', false);
    }
}

// Initial render of the queue
renderQueue();

