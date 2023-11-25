document.addEventListener('DOMContentLoaded', function() {
  let arrayData = [5, 10, 15, 20, 25, 30, 35, 40];

  // Functions to add and remove elements
  function addElement() {
    const value = parseInt(document.getElementById('newValue').value, 10);
    const index = parseInt(document.getElementById('newIndex').value, 10);
  
    // Check if the index is valid
    if (isNaN(index) || index < 0 || index > arrayData.length) {
      alert("Invalid index. Please enter a valid index.");
      return;
    }
  
    // Check if the value is valid
    if (isNaN(value)) {
      alert("Please enter a valid number.");
      return;
    }
  
    // Add element at the specified index
    arrayData.splice(index, 0, value);
    updateArray();
  }

  function removeElement() {
    arrayData.pop();
    updateArray();
  }

  // Update array visualization
  function updateArray() {
    // Adjust SVG container size based on array length
    svg.attr('width', arrayData.length * (barWidth + barSpacing));

    // Update the bars (elements)
    const bars = svg.selectAll('rect').data(arrayData);
    bars.enter()
        .append('rect')
        .merge(bars)
        .transition()
        .duration(500)
        .attr('x', (d, i) => i * (barWidth + barSpacing))
        .attr('y', 20)
        .attr('width', barWidth)
        .attr('height', 30)
        .attr('fill', '#4CAF50');
    bars.exit().remove();

    // Update text labels (values)
    const values = svg.selectAll('.value').data(arrayData);
    values.enter()
        .append('text')
        .attr('class', 'value')
        .merge(values)
        .transition()
        .duration(500)
        .text(d => d)
        .attr('x', (d, i) => i * (barWidth + barSpacing) + barWidth / 2)
        .attr('y', 40)
        .attr('text-anchor', 'middle');
    values.exit().remove();

    // Update index labels (indexes)
    const indexes = svg.selectAll('.index').data(arrayData);
    indexes.enter()
        .append('text')
        .attr('class', 'index')
        .merge(indexes)
        .transition()
        .duration(500)
        .text((d, i) => `Index ${i}`)
        .attr('x', (d, i) => i * (barWidth + barSpacing) + barWidth / 2)
        .attr('y', 70)
        .attr('text-anchor', 'middle');
    indexes.exit().remove();
}


  // Event listeners for buttons
  document.getElementById('addElement').addEventListener('click', addElement);
  document.getElementById('removeElement').addEventListener('click', removeElement);


  // SVG container dimensions
  const width = 500;
  const barWidth = 50;
  const barSpacing = 10;
  const height = 100;

  // Create SVG container
  const svg = d3.select('body').append('svg')
                .attr('width', width)
                .attr('height', height);

  // Create bars (elements)
  svg.selectAll('rect')
     .data(arrayData)
     .enter()
     .append('rect')
     .attr('x', (d, i) => i * (barWidth + barSpacing))
     .attr('y', 20)
     .attr('width', barWidth)
     .attr('height', 30)
     .attr('fill', '#4CAF50');

  // Add text labels (values)
  svg.selectAll('.value')
     .data(arrayData)
     .enter()
     .append('text')
     .attr('class', 'value')
     .text(d => d)
     .attr('x', (d, i) => i * (barWidth + barSpacing) + barWidth / 2)
     .attr('y', 40)
     .attr('text-anchor', 'middle');

  // Add index labels (indexes)
  svg.selectAll('.index')
     .data(arrayData)
     .enter()
     .append('text')
     .attr('class', 'index')
     .text((d, i) => `Index ${i}`)
     .attr('x', (d, i) => i * (barWidth + barSpacing) + barWidth / 2)
     .attr('y', 70)
     .attr('text-anchor', 'middle');
});
