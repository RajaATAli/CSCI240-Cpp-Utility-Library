# CSCI240 C++ Utility Library & Data Structures and Algorithms Visualizer 

![Library Version](https://img.shields.io/badge/version-0.1.0-blue)
![Contributions welcome](https://img.shields.io/badge/contributions-welcome-orange)
![License](https://img.shields.io/badge/license-MIT-green)
![C++](https://img.shields.io/badge/C++-11-red)
![React](https://img.shields.io/badge/React-16.13.1-blue)

## Table of Contents
- [Description](#description)
- [Goals](#goals)
- [Installation](#installation)
- [Usage](#usage)
- [Directory Structure](#directory-structure)
- [Contributing](#contributing)
- [Feedback and Issues](#feedback-and-issues)
- [License](#license)
- [Acknowledgments](#acknowledgments)

## Description
This repository is dedicated to the students of CSCI240 (Computing II). As a teaching assistant for the course, I housed an Open-Source C++ Utility Library that captures a vast array of algorithms and data structures covered throughout the semester. The library is designed to be a practical tool for both current and future batches, blending theoretical understanding with real-world application. Furthermore, the library is accompanied by a web-based visualizer that allows students to see the algorithms and data structures in action. The algorithm sorting visualizer is built using React.js, an open-source JavaScript library for building user interfaces, and its build was integrated into the static website for the library Contributing to this repository may also be a way to better prepare yourself for CSCI36200 (Data Structures and Algorithms)

## Goals
- **Knowledge Repository:** Serve as a go-to resource for current and future students, assisting them in reviewing and understanding key course concepts.
- **Hands-on Experience:** Provide students with the opportunity to apply theoretical knowledge in a real-world coding and collaborative environment.
- **Community:** Foster a community of students and educators who are passionate about learning and teaching.

## Installation and Usage
To get started with the CSCI240 C++ Utility Library and Visualizer, follow these steps to clone the repository and set up the library on your local machine.

##### Prerequisites
- A modern C++ compiler (supporting at least C++98 standard)
- Git (for cloning the repository)
- CppUnit (for running unit tests)

##### Steps
1. **Clone the repository within your environment**
`git clone https://github.com/your-username/CSCI240-Cpp-Utility-Library.git`
2. **Include the header files in your project by adding the following line to your C++ source files**
`#include "path/to/CSCI240-Cpp-Utility-Library/Data-Structures/Specific-Data-Structure/your_desired_header.h"`
3. **Running Unit Tests (if needed)**
The library includes unit tests to ensure the reliability and correctness of its components. These tests are written using the CppUnit framework. Follow these steps to compile and run the unit tests:

- CppUnit library installed on your system.
- A modern C++ compiler (the library is configured for g++ with C++11 standard).
- Compile the Tests by navigating to the root directory of the CSCI240 C++ Utility Library.
`make test`
- After compilation, an executable named `test` is generated. Run the tests by executing:
`./test`
- To clean up generated object files and executables
`make clean`

###### *Writing New Tests*
- If you wish to add new tests, create a `.cpp` file in the `Tests/` directory.
- Make sure to register the test suite and include necessary headers.

4. **Running the Sorting Visualizer**
The algorithm sorting visualizer is a React application that allows you to see the sorting algorithm. To run the visualizer, follow these steps:
- Navigate to the `sorting-visualizer/` directory.
- Install the dependencies by running `npm install`.
- Start the development server by running `npm start`.
- The visualizer should now be running on `localhost:3000`.

To run the static build of the website, and see other data structures visualized, as well as the sorting visualizer, follow these steps:
- Navigate to the `Web-Visualization/` directory.
- Open the `index.html` file in your browser.
- The static build of the website should now be running.

##### Exploring and Running Demonstrations
- The actual implementations of algorithms and data structures are located in their respective directories. Browsing through these files will help you understand the coding patterns and implementations in C++.
- To see an algorithm or data structure in action, compile and run the respective `demonstration.cpp` file. For example, if you are in the `Algorithms/Sorting/` directory, you can compile and run the BubbleSort demonstration as follows:
```
g++ -o BubbleSortDemo BubbleDemo.cpp
./BubbleSortDemo
```


## Directory Structure
- `Algorithms/`: Contains implementations of key algorithms.
- `Data-Structures/`: Houses various data structure implementations.
- `Tests/`: Unit tests for the library components.
- `Documentation/`: In-depth descriptions, use-cases, and examples for each algorithm and data structure.
- `Web-Visualization/`: Houses the web visualizer for the algorithms and data structures.
- `sorting-visualizer/`: React.js application for the algorithm sorting web visualizer. (Build was integrated into the static website for the library)

## Contributing
We welcome contributions from students and educators alike. If you wish to contribute:

1. Fork the repository.
2. Create a new branch for your feature or fix.
3. Submit a pull request.

For detailed guidelines, please refer to the `CONTRIBUTING.md` file.

## Feedback and Issues
If you encounter any issues or wish to provide feedback, please open an issue on this repository. Your insights and feedback are invaluable to improving this resource for everyone. If you have any other questions, please contact the project maintainer, Raja Allmdar Tariq Ali - [rajaali@iu.edu](mailto:rajaali@iu.edu)

## License
This project is licensed under the MIT License. For more details, see the `LICENSE` file.

## Acknowledgments
- The dedicated faculty and students of CSCI240.
- All contributors and supporters of this project.