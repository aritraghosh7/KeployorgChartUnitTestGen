# KeployorgChartUnitTestGen

This project demonstrates how to generate and execute unit tests in a modern C++ codebase using the **Google Test** framework. It focuses on testing utility functions (e.g., `add`, `multiply`) with the help of CMake for building and configuration.

---

## 📁 Project Structure

<pre>

orgChartUnitTestGen/
├── orgChartApi/       # Main project folder
│ ├── clean_src/       # Source code (math_utils, etc.)
│ ├── test_gen/        # LLM-generated test code
│ ├── CMakeLists.txt   # Build configuration
│ └── build/           # CMake-generated build files (ignored by git)
├── googletest/        # GoogleTest source (manually cloned or submodule)
│ └── build/           # GTest build files
└── README.md          # Project documentation



</pre>
---
## ⚙️ Prerequisites

- C++ compiler (e.g., MinGW-w64 15.1.0 or newer)
- CMake 3.15+
- Git
- GoogleTest (cloned into `googletest/` folder)

---

## 🚀 How to Build and Run Tests

### ✅ Step 1: Clone the Repo

```bash
git clone https://github.com/keploy/orgChartApi
cd Cpp-test-Generator
```
#### Note: Replace yourusername with your GitHub username if different.


### ✅ Step 2: Build GoogleTest
```bash
cd googletest
cmake -S . -B build -G "MinGW Makefiles"
cmake --build build
```
### ✅ Step 3: Build the Project and Tests
```bash
cd ../orgChartApi
cmake -S . -B build -G "MinGW Makefiles"
cmake --build build --target math_utils_test
```
### ✅ Step 4: Run the Tests
```bash
.\build\math_utils_test.exe
```
---
## 🔬 Sample Output
```bash
[==========] Running 2 tests from 1 test suite.
[----------] Global test environment set-up.
[ RUN      ] MathUtils.Addition
[       OK ] MathUtils.Addition (0 ms)
[ RUN      ] MathUtils.Multiplication
[       OK ] MathUtils.Multiplication (0 ms)
[----------] 2 tests from MathUtils (2 ms total)
[  PASSED  ] 2 tests.
```
### 🧠 Features
- Unit test generation using LLM (e.g., CodeLlama)

- Clean separation of source and test code

- GoogleTest setup from source

- Modern CMake integration

- Cross-platform ready (Windows tested)

### 📌 Tips
- Ensure googletest/build/lib contains libgtest.a and libgtest_main.a after building.

- The CMakeLists.txt is structured to allow future test modules to be added easily.





