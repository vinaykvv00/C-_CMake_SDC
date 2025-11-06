#!/bin/bash
set -e

# Clean and rebuild with coverage flags
rm -rf build
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Debug -DCMAKE_CXX_FLAGS="--coverage" ..
make

# Run tests
ctest --verbose

# Generate coverage report
lcov --capture --directory . --output-file coverage.info --ignore-errors mismatch
lcov --remove coverage.info '/usr/*' '*/test/*' --output-file coverage.info
genhtml coverage.info --output-directory coverage_report

echo " Coverage report generated in: build/coverage_report/index.html"
