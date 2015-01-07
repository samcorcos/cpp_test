#include <cstdio>
using namespace std;

int main( int argc, char ** argv )
{
    int x = 7;
    int *ip = &x;
    int &y = x;
    printf("the value of x is %d\n", x);
    printf("the value of y is %d\n", y);
    printf("the value of *ip is %d\n", *ip);

    x = 42;
    printf("the value of x is %d\n", x);
    printf("the value of y is %d\n", y);
    printf("the value of *ip is %d\n", *ip);
    
    y = 73;
    printf("the value of x is %d\n", x);
    printf("the value of y is %d\n", y);
    printf("the value of *ip is %d\n", *ip);
    
    return 0;
}


/*
 `int &y = x;` makes it `y` a reference, and the *ip = &x makes it a pointer...?
 One of the major differences is that you cannot define a reference without initializing it.
 So, in this case, whenever you use `y`, it will always have the same value as `x`, and it will give you the value of x at the time when it's called
 
 When you change hte valye of x, it changes the value of y
 and when you change y, it changes x. When somethign is a reference, it's pointing to the same piece of memory
 
 
 
 
*/