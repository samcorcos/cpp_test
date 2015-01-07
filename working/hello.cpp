//
//  hello.cpp
//  working
//
//  Created by xxxx on 1/7/15.
//  Copyright (c) 2015 xxxx. All rights reserved.
//

#include <cstdio>
using namespace std;

int main( int argc, char ** argv )
{
    int x;
    x = 42;
    printf("x is %d\n", x); // The `%d` is a token that tells `printf` where to put the `x` value
    return 0;
}

// C++ is a general purpose programming language
// 1. Object Oriented
// 2. Functional
// 3. Procedural
// 4. Generic

// You can think of C++ as a set of 5 connected languages
// 1. Preprocessor
// 2. The C language syntax
// 3. Classes and objects
// 4. C++ templates
// 5. STL (Standard Template Library) provides common functionality

// "using namespace" is a shortcut so you don't have to use std::puts, you can just use puts
// if it doesn't find the function in the current namespace, it will run it some other way

// There must always be a "main" function, and there must always be one, and no more than one.
// Function outputs are defined before the function. For example, `int main()` is an integer function and must return an integer
// Most main functions return 0

//`printf` is like `puts` but doesn't include a new line
// cout << "hello world";
// that will also output

// underscore for the first character are generally reserved for private identifiers. double underscore is for system,
// so definitely don't use double underscore.




