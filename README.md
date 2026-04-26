# My First C Course - Learning Progress

This repository demonstrates my progress in learning C programming, following the course structure and topics covered below.

## Table of Contents

- [Reference Course](#reference-course)
- [Course Contents](#course-contents)
- [How to Compile one File and Run](#how-to-compile-one-file-and-run)
- [How to Compile Multiple Files and Run](#how-to-compile-multiples-files-and-run)
- [How to Compile All Files and Run](#how-to-compile-all-files-and-run)
- [Next Steps](#next-steps)

## Reference Course

[C COURSE - YouTube](https://www.youtube.com/watch?v=KJgsSFOSQv0)

## Course Contents

- **Introduction**
  - Setting up the environment (Windows and Mac)
  - First program: Hello World
  - Drawing shapes with text output
- **Variables and Data Types**
  - Declaring and using variables
  - Basic data types: `int`, `char`, `float`, `double`, `string`
  - Constants and comments
- **Input and Output**
  - Using `printf` for formatted output
  - Getting user input with `scanf` and `fgets`
- **Working with Numbers**
  - Arithmetic operations
  - Formatted printing and interpolation
- **Applications**
  - Building a basic calculator (arithmetic operations, user input)
  - Building a Mad Libs game (string input, concatenation, formatted output)
  - Building a better calculator (using `switch` for operator selection)
  - Building a guessing game (loops, conditionals, user interaction)
- **Control Structures**
  - `if/else` statements
  - `switch` statements
  - `for` loops
  - `while` loops
  - Nested loops with 2D arrays
- **Functions**
  - Defining and calling functions
  - Return statements
  - Passing parameters
- **Arrays**
  - Classic arrays
  - Initialized arrays
  - 2D arrays and nested loops
- **Structs**
  - Defining composite types with `struct`
  - Initializing structs
  - Arrays of structs
  - Passing structs to functions
  - Using `typedef` to simplify type names
- **Pointers**
  - Memory addresses
  - Pointer variables
  - Dereferencing pointers
  - Arrays of pointers
- **String Manipulation**
  - Copying strings with `strcpy` and `strncpy`
  - Direct character access
- **File Handling**
  - Writing files
  - Reading files
- **Memory Concepts**
  - Difference between initialization and assignment in arrays
  - Memory layout and alignment in structs

## How to Compile one File and Run

All source files are located in the project.  
To compile an exercise, use `gcc` and specify the file name:

```bash
gcc main.c src/folderName/fileName.c -o fileName
./fileName
```

## How to compile multiples Files and Run

If you want to compile multiple source files together (for example, combining main.c with several modules):

```bash
gcc main.c src/folderName/file1.c src/folderName/file2.c -o program
./program
```

## How to compile All Files and Run

You can also compile all source files in a folder at once using the `*` wildcard:

```bash
gcc main.c src/folderName/*.c -o program
./program
```

## Next Steps

- Practice more with pointers and memory management
- Explore dynamic memory allocation (`malloc`, `free`)
- Start small projects (e.g., text-based games, file parsers)
