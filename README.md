# FastDivide

The Fast Divide Library is an ultralight, ultrafast C library that provides a function for fast unsigned integer division. We use loop unrolling and manual shifts for logarithmic approximation to perform the division quickly and efficiently. Inspired by Quake III's fast inverse sqrt. Dedicated to the beautiful world of bit hacks.

# Usage

To use the Fast Divide Library in your C code, you need to follow the steps below:

1. Include the fastdivide.h header file in your code:

  `#include "fastdivide.h"`

2. Link your code against the libfastdivide.so library file. On Linux, you can do this using the -l flag and the library name:

  `gcc -o myprogram myprogram.c -L. -lfastdivide`

3. Call the fastdivide function to divide two unsigned integers:

  `unsigned int a = 1234;
   unsigned int b = 5678;
   unsigned int result = fastdivide(a, b);`

The fastdivide function takes two unsigned integers as arguments and returns their quotient as an unsigned integer.


# Building from source

To build the Fast Divide Library from source, you need to follow the steps below:

1. Clone the repository:

  `git clone https://github.com/hitbug-exe/FastDivide.git`

2. Change into the fastdivide directory:

  `cd FastDivide`

3. Compile the fastdivide.c file into a shared library file using the gcc compiler:

   `gcc -shared -o libfastdivide.so fastdivide.c`

This command will create a shared library file named libfastdivide.so in the current directory.

# License

The Fast Divide Library is released under the MIT License. You are free to use, modify, and distribute the code as long as you include the license text.