/*
 * CS:APP Data Lab
 *
 * <Please put your name and userid here>
 *
 * bits.c - Source file with your solutions to the Lab.
 *          This is the file you will hand in to your instructor.
 *
 * WARNING: Do not include the <stdio.h> header; it confuses the dlc
 * compiler. You can still use printf for debugging without including
 * <stdio.h>, although you might get a compiler warning. In general,
 * it's not good practice to ignore compiler warnings, but in this
 * case it's OK.
 */

#if 0
/*
 * Instructions to Students:
 *
 * STEP 1: Read the following instructions carefully.
 */


You will provide your solution to the Data Lab by
editing the collection of functions in this source file.

INTEGER CODING RULES:

  Replace the "return" statement in each function with one
  or more lines of C code that implements the function. Your code
  must conform to the following style:

  int Funct(arg1, arg2, ...) {
      /* brief description of how your implementation works */
      int var1 = Expr1;
      ...
      int varM = ExprM;

      varJ = ExprJ;
      ...
      varN = ExprN;
      return ExprR;
  }

  Each "Expr" is an expression using ONLY the following:
  1. Integer constants 0 through 255 (0xFF), inclusive. You are
      not allowed to use big constants such as 0xffffffff.
  2. Function arguments and local variables (no global variables).
  3. Unary integer operations ! ~
  4. Binary integer operations & ^ | + << >>

  Some of the problems restrict the set of allowed operators even further.
  Each "Expr" may consist of multiple operators. You are not restricted to
  one operator per line.

  You are expressly forbidden to:
  1. Use any control constructs such as if, do, while, for, switch, etc.
  2. Define or use any macros.
  3. Define any additional functions in this file.
  4. Call any functions.
  5. Use any other operations, such as &&, ||, -, or ?:
  6. Use any form of casting.
  7. Use any data type other than int.  This implies that you
     cannot use arrays, structs, or unions.


  You may assume that your machine:
  1. Uses 2s complement, 32-bit representations of integers.
  2. Performs right shifts arithmetically.
  3. Has unpredictable behavior when shifting an integer by more
     than the word size.

EXAMPLES OF ACCEPTABLE CODING STYLE:
  /*
   * pow2plus1 - returns 2^x + 1, where 0 <= x <= 31
   */
  int pow2plus1(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     return (1 << x) + 1;
  }

  /*
   * pow2plus4 - returns 2^x + 4, where 0 <= x <= 31
   */
  int pow2plus4(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     int result = (1 << x);
     result += 4;
     return result;
  }

FLOATING POINT CODING RULES

For the problems that require you to implent floating-point operations,
the coding rules are less strict.  You are allowed to use looping and
conditional control.  You are allowed to use both ints and unsigneds.
You can use arbitrary integer and unsigned constants.

You are expressly forbidden to:
  1. Define or use any macros.
  2. Define any additional functions in this file.
  3. Call any functions.
  4. Use any form of casting.
  5. Use any data type other than int or unsigned.  This means that you
     cannot use arrays, structs, or unions.
  6. Use any floating point data types, operations, or constants.


NOTES:
  1. Use the dlc (data lab checker) compiler (described in the handout) to
     check the legality of your solutions.
  2. Each function has a maximum number of operators (! ~ & ^ | + << >>)
     that you are allowed to use for your implementation of the function.
     The max operator count is checked by dlc. Note that '=' is not
     counted; you may use as many of these as you want without penalty.
  3. Use the btest test harness to check your functions for correctness.
  4. Use the BDD checker to formally verify your functions
  5. The maximum number of ops for each function is given in the
     header comment for each function. If there are any inconsistencies
     between the maximum ops in the writeup and in this file, consider
     this file the authoritative source.
*/
         
/*
 * STEP 2: Modify the following functions according the coding rules.
 *
 *   IMPORTANT. TO AVOID GRADING SURPRISES:
 *   1. Use the dlc compiler to check that your solutions conform
 *      to the coding rules.
 *   2. Use the BDD checker to formally verify that your solutions produce
 *      the correct answers.
 */


#endif
/* Copyright (C) 1991-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
/* This header is separate from features.h so that the compiler can
   include it implicitly at the start of every compilation.  It must
   not itself include <features.h> or any other header that includes
   <features.h> because the implicit include comes before any feature
   test macros that may be defined in a source file before it first
   explicitly includes a system header.  GCC knows the name of this
   header in order to preinclude it.  */
/* glibc's intent is to support the IEC 559 math functionality, real
   and complex.  If the GCC (4.9 and later) predefined macros
   specifying compiler intent are available, use them to determine
   whether the overall intent is to support these features; otherwise,
   presume an older compiler has intent to support these features and
   define these macros by default.  */
/* wchar_t uses Unicode 10.0.0.  Version 10.0 of the Unicode Standard is
   synchronized with ISO/IEC 10646:2017, fifth edition, plus
   the following additions from Amendment 1 to the fifth edition:
   - 56 emoji characters
   - 285 hentaigana
   - 3 additional Zanabazar Square characters */
/* We do not support C11 <threads.h>.  */
/*
 * bitOr - x|y using only ~ and &
 *   Example: bitOr(6, 5) = 7
 *   Legal ops: ~ &
 *   Max ops: 8
 *   Rating: 1
 */
int bitOr(int x, int y) {
         //apply DeMorgan's Law
         //x|y = ~~(x|y)
         return ~(~x & ~y); 
}
/*
 * evenBits - return word with all even-numbered bits set to 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 8
 *   Rating: 1
 */
int evenBits(void) {
    //4 byte word
    //0x55555555
    //0x00 - OxFF
    //use 0x55 at first because all even bits are set to zero
    int x = 0x55;
    int mask; //85 as a decimal
    mask = x << 8; //hex now is 0101 0101 0000 0000
    x = x | mask; //
    mask = x << 8;
    x = x | mask;
    mask = x << 8;
    x = x | mask;
  return x;
}
/*
 * minusOne - return a value of -1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 2
 *   Rating: 1
 */
int minusOne(void) {
  int x = 0x0;
  return ~x;
}
/*
 * allEvenBits - return 1 if all even-numbered bits in word set to 1
 *   Examples allEvenBits(0xFFFFFFFE) = 0, allEvenBits(0x55555555) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 2
 */
int allEvenBits(int x) {
  //0xAA - OxFF
    
  //we keep shifting and doing 'ands'
  //if the last digit of a binary number is 1, the number is odd; if it's 0, the number is even.
  x = x & (x >> 16);
  x = x & (x >> 8);
  x = x & (x >> 4);
  x = x & (x >> 2);
    
  return x&1; 
}
/*
 * anyOddBit - return 1 if any odd-numbered bit in word set to 1
 *   Examples anyOddBit(0x5) = 0, anyOddBit(0x7) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 2
 */
int anyOddBit(int x) {
    //0x55555555
    //0x00 - OxFF
    //use 0x55 at first
    
    //1st part generate the mask of 0xAAAAAAAA
    int a = 0xAA;
    int res;
    int mask = 0xAA; //85 as a decimal
    
    
    mask = a << 8; //number is AA 00
    mask = a | mask; //now it's 0x AA AA
    mask = mask << 8; 
    mask = a | mask; 
    mask = mask << 8;
    mask = a | mask;  //now it's 0x AA AA AA AAA
    
   //2nd part is to check
   //we do the and with the 0xA, the exemplary odd digit binary
   //if any of the digits of res have a 1 in them, then we know it has odd numbers
    
    res = x & mask;
        
    return !!res;
}
/*
 * byteSwap - swaps the nth byte and the mth byte
 *  Examples: byteSwap(0x12345678, 1, 3) = 0x56341278
 *            byteSwap(0xDEADBEEF, 0, 2) = 0xDEEFBEAD
 *  You may assume that 0 <= n <= 3, 0 <= m <= 3
 *  Legal ops: ! ~ & ^ | + << >>
 *  Max ops: 25
 *  Rating: 2
 */

/*
32 bits = 4 bytes
make a mask (0xFF) that can remove/add the certain bytes we need
*/
// int byteSwap(int x, int n, int m) {
//     int mask1;
//     int mask2;
//     int mask3;
//     int mask4;
//     int copy;
//     int nullify;
    
//     int diff; //difference between n and m
    
//     int c;

//     int num1; //how much to shift right by
//     int num2; //how much to shift right by (for m)
    
//     copy = x;
//     num1 = n << 3; //used for nullifying where values are
//     num2 = m << 3;
//     diff = m+~n+1;
    
//     mask1 = 0xFF;
//     mask2 = 0xFF;
//     mask3 = 0xFF; //mask3 and mask4 for nullifying where the value
//     mask4 = 0xFF;
//     nullify = 0xFF;
    
//     //nullifying the bytes where we will be switching the values
//     mask3 = mask3 << num1;
//     mask3 = ~mask3;
    
//     copy = copy & mask3;
    
//     mask4 = mask4 << num2;
//     mask4 = ~mask4;
    
//     copy = copy & mask4;
    
// //     cout << "This is int copy : " << std::hex << copy << endl;
    
//     mask1 = mask1 << num1; //mask for nth byte
    
// //     cout << "This is int mask1: " << std::hex << mask1 << endl;

//     mask2 = mask2 << num2; //mask for mth byte
    
//     mask1 = mask1 & x;
//     mask2 = mask2 & x;
    
// //     cout << "This is int mask1: " << std::hex << mask1 << endl;
// //     cout << "This is int mask2: " << std::hex << mask2 << endl;

//     mask1 = mask1 << (diff << 3);
//     mask2 = mask2 >> (diff << 3);
//     nullify = nullify << (n << 3);

    
//     mask2 = mask2 & nullify;

//     //put a mask to clear MSB
    
// //     cout << "This is int mask1: " << std::hex << mask1 << endl;
// //     cout << "This is int mask2: " << std::hex << mask2 << endl;
// //         cout << endl;

//     c = mask1 | mask2;
// //     cout << "This is int c: " << std::hex << c << endl;
// //     cout << "This is int x: " << std::hex << x << endl;
    

//     copy = c | copy;
// //     cout << endl;

// //     cout << "This is int c: " << std::hex << copy << endl;
    
//     return copy;
// }
int byteSwap(int x, int n, int m) {
    int maskn;
    int mask2;
    int mask3;
    int mask4;
    int copy;
    int nullify;
    
    int diff; //difference between n and m
    
    int c;

    int n8; //how much to shift right by
    int m8; //how much to shift right by (for m)
    
    copy = x;
    n8 = n << 3; //used for nullifying where values are
    m8 = m << 3;
    
    maskn = 0xFF;
    mask2 = 0xFF;
    mask3 = 0xFF; //mask3 and mask4 for nullifying where the value
    mask4 = 0xFF;
    nullify = 0xFF;
    
    //nullifying the bytes where we will be switching the values
    mask3 = mask3 << n8;
    mask3 = ~mask3;
    
    copy = copy & mask3;
    
    mask4 = mask4 << m8;
    mask4 = ~mask4;
    
    copy = copy & mask4;
    
//     cout << "This is int copy : " << std::hex << copy << endl;
    
    maskn = maskn << n8; //mask for nth byte

    
//     cout << "This is int maskn: " << std::hex << maskn << endl;

    mask2 = mask2 << m8; //mask for mth byte
    
    maskn = maskn & x;
    mask2 = mask2 & x;
    
//     cout << "This is int maskn (first time ): " << std::hex << maskn << endl;
//     cout << "This is int mask2:  (first time )" << std::hex << mask2 << endl;

//     cout << "Diff applied here" << endl;
    maskn = (maskn >> (n8)) & 0xFF; //shift all the way to the right
    maskn = (maskn << (m8)); //shift where it should be
    mask2 = mask2 >> ((m8) & 0xFF);
    mask2 = mask2 << (n8);
    
    nullify = nullify << (n << 3);

    
    mask2 = mask2 & nullify;

    //put a mask to clear MSB
    
//     cout << "This is int maskn: " << std::hex << maskn << endl;
//     cout << "This is int mask2: " << std::hex << mask2 << endl;
//     cout << endl;

    c = maskn | mask2;
//     cout << "This is int c: " << std::hex << c << endl;
//     cout << "This is int x: " << std::hex << x << endl;
    

    copy = c | copy;
//     cout << endl;

//     cout << "This is int c: " << std::hex << copy << endl;
    
    return copy;
}
/*
 * addOK - Determine if can compute x+y without overflow
 *   Example: addOK(0x80000000,0x80000000) = 0,
 *            addOK(0x80000000,0x70000000) = 1,
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 20
 *   Rating: 3
 */
int addOK(int x, int y) {
    int sum;
    
    int signSum;
    int signX;
    int signY;
    
    signX = x >> 31;
    signY = y >> 31;
    
    sum = x + y;
    signSum = sum >> 31;
    
    return !(~(signY ^ signX) & (signSum ^ signX));
}

/*
 * conditional - same as x ? y : z
 *   Example: conditional(2,4,5) = 4
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 16
 *   Rating: 3
 */
int conditional(int x, int y, int z){
    x = !!x; //convert to boolean
    x = x << 31;
    x = x >> 31;
    
  return ((x & y) | (~x & z));
}

/*
 * isAsciiDigit - return 1 if 0x30 <= x <= 0x39 (ASCII codes for characters '0' to '9')
 *   Example: isAsciiDigit(0x35) = 1.
 *            isAsciiDigit(0x3a) = 0.
 *            isAsciiDigit(0x05) = 0.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 3
 */
int isAsciiDigit(int x){
    int upper;
    int lower;
    int res1;
    int res2;
    int MSB1; //get the MSB
    int MSB2;
    
    upper = 0x39;
    lower = 0x30; 
    
    res1 = upper + ~x + 1;
    res2 = x + ~lower + 1;
    
    MSB1 = res1 >> 31;
    MSB2 = res2 >> 31;

    //negative not in the range    
    
    return !(MSB1|MSB2);
}

/*
 * replaceByte(x,n,c) - Replace byte n in x with c
 *   Bytes numbered from 0 (LSB) to 3 (MSB)
 *   Examples: replaceByte(0x12345678,1,0xab) = 0x1234ab78
 *   You can assume 0 <= n <= 3 and 0 <= c <= 255
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 10
 *   Rating: 3
 */
int replaceByte(int x, int n, int c) {
    int mask;
    
    mask = 0xFF;
    mask = mask << (n << 3); //shift our mask where the byte we need to replace is
    mask = ~mask; //turn our mask into 1s except where the byte wee need to replace is
    x = mask & x; //zero out where the byte is
    
    c = c << (n << 3); //push the new byte where it should go
//     cout << "this is c: " << std::hex << c << endl;

    c = c | x; //since it's zero where the byte should be, we can 'or' to put it where it should be
        
  return c;
}
/*
 * rotateRight - Rotate x to the right by n
 *   Can assume that 0 <= n <= 31
 *   Examples: rotateRight(0x87654321,4) = 0x18765432
 *   Legal ops: ~ & ^ | + << >>
 *   Max ops: 25
 *   Rating: 3
 */
int rotateRight(int x, int n) {
    int a,b,mask;
    
    mask = ~0; //0xFFFFFFFF negation trick
    mask = mask << (32 + ~n +1);
    mask = ~mask;
    
    a = x << (32 + ~n +1);
    b = x >> n & mask;
    
  return a|b;
}
/*
 * satAdd - adds two numbers but when positive overflow occurs, returns
 *          maximum possible value (Tmax), and when negative overflow occurs,
 *          it returns minimum negative value (Tmin)
 *   Examples: satAdd(0x40000000,0x40000000) = 0x7fffffff
 *             satAdd(0x80000000,0xffffffff) = 0x80000000
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 30
 *   Rating: 4
 */
int satAdd(int x, int y){
    int Tmax;
    int Tmin;
    int T;
    int addOK;
    
    int sum;
    int signSum,signX,signY;
    
    signX = x >> 31;
    signY = y >> 31;
    
    sum = x + y;
    signSum = sum >> 31;
    
    
    //Tmax = 0x7FFFFFFF;
    //Tmin = 0x80000000;
    
    addOK = !(~(signY ^ signX) & (signSum ^ signX));
    addOK = (addOK << 31) >> 31;
    T = ((sum >> 31) ^ (1 << 31));
    
  return((addOK & sum) | ((~addOK) & T));
}
/*
 * Extra credit
 */
/*
 * float_abs - Return bit-level equivalent of absolute value of f for
 *   floating point argument f.
 *   Both the argument and result are passed as unsigned int's, but
 *   they are to be interpreted as the bit-level representations of
 *   single-precision floating point values.
 *   When argument is NaN, return argument..
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 10
 *   Rating: 2
 */
unsigned float_abs(unsigned uf) {
  return 2;
}
/*
 * float_f2i - Return bit-level equivalent of expression (int) f
 *   for floating point argument f.
 *   Argument is passed as unsigned int, but
 *   it is to be interpreted as the bit-level representation of a
 *   single-precision floating point value.
 *   Anything out of range (including NaN and infinity) should return
 *   0x80000000u.
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 30
 *   Rating: 4
 */
int float_f2i(unsigned uf) {
  return 2;
}
/*
 * float_half - Return bit-level equivalent of expression 0.5*f for
 *   floating point argument f.
 *   Both the argument and result are passed as unsigned int's, but
 *   they are to be interpreted as the bit-level representation of
 *   single-precision floating point values.
 *   When argument is NaN, return argument
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 30
 *   Rating: 4
 */
unsigned float_half(unsigned uf) {
  return 2;
}
