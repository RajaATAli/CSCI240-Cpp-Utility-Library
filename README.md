# CSCI240 C++ Utility Library

![Library Version](https://img.shields.io/badge/version-0.1.0-blue)
![Contributions welcome](https://img.shields.io/badge/contributions-welcome-orange)
![License](https://img.shields.io/badge/license-MIT-green)

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
This repository is dedicated to the students of CSCI240 (Computing II). It houses an Open-Source C++ Utility Library that captures a vast array of algorithms and data structures covered throughout the semester. The library is designed to be a practical tool for both current and future batches, blending theoretical understanding with real-world application. Contributing to this repository may also be a way to better prepare yourself for CSCI36200 (Data Structures and Algorithms)

## Goals
- **Knowledge Repository:** Serve as a go-to resource for current and future students, assisting them in reviewing and understanding key course concepts.
- **Hands-on Experience:** Provide students with the opportunity to apply theoretical knowledge in a real-world coding and collaborative environment.

## Installation and Usage
To get started with the CSCI240 C++ Utility Library, follow these steps to clone the repository and set up the library on your local machine.

##### Prerequisites
- A modern C++ compiler (supporting at least C++98 standard)
- Git (for cloning the repository)

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

##### Writing New Tests
- If you wish to add new tests, create a `.cpp` file in the `Tests/` directory.
- Make sure to register the test suite and include necessary headers.

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


