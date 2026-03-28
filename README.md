# My First C Course
It demonstrates progress in topics such as:
- Data input and output (`scanf`, `fgets`, `printf`)
- Basic data types (`int`, `char`, `float`, `double`, `string`)
- Formatted output and interpolation
- Arrays (classic arrays, initialized arrays, arrays of arrays)
- Pointers (arrays of pointers, pointer variables for strings and chars)
- String manipulation (`strcpy`, direct access to characters)
- Control structures (`for`, `switch`, `if/else`)
- Simple applications (calculator, Mad Libs game)

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