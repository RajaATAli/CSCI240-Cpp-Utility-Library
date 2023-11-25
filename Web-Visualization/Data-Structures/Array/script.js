document.addEventListener('DOMContentLoaded', function() {
  // Example array data
  const arrayData = [5, 10, 15, 20, 25, 30, 35, 40];

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
