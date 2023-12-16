const stack = [];
const width = 200, height = 300;
const svg = d3.select("#stackVisual").append("svg")
              .attr("width", width)
              .attr("height", height);

function updateStackVisual() {
    // Update for rectangles
    const rects = svg.selectAll("rect").data(stack);
    rects.enter()
         .append("rect")
         .attr("width", width)
         .attr("height", 20)
         .attr("x", 0)
         .attr("y", (d, i) => height - (i + 1) * 22)
         .attr("fill", "steelblue");
    rects.exit().remove();

    // Update for text
    const texts = svg.selectAll("text").data(stack);
    texts.enter()
         .append("text")
         .attr("x", width / 2)
         .attr("y", (d, i) => height - (i + 1) * 22 + 15) // Adjust Y position for visual alignment
         .attr("text-anchor", "middle") // Center align text
         .text(d => d);
    texts.exit().remove();
}

document.getElementById("pushElement").addEventListener("click", () => {
    const value = parseInt(document.getElementById("newValue").value, 10);
    if (!isNaN(value)) {
        stack.push(value);
        updateStackVisual();
    }
});

document.getElementById("popElement").addEventListener("click", () => {
    stack.pop();
    updateStackVisual();
});
