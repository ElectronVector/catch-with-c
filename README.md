This is an example for how to use the [Catch unit test framework](https://github.com/philsquared/Catch) to write BDD-style tests for C.

## Requires
- Rake (via Ruby)
- g++

## How to run
Run all the tests with `rake`.

## Details
The module under test is the **power_button** which can be found in **power_button.c**. The BDD-style tests can be found in **test_power_button.c**.

Catch is a C++ unit test framework, but the code under test in the power_button module is straight up C. To run the tests, we need to compile everything with g++ (a C++ compiler).

See the Rakefile for more details about how everything is built.
