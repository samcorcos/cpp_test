#include <cstdio>
using namespace std;

int main( int argc, char ** argv )
{
    int x = 7;
    int y = 42;
    int *ip = &x;
    printf("the value of x is %d\n", x);
    printf("the value of y is %d\n", y);
    printf("the value of *ip is %d\n", *ip);

    x = 73;
    printf("the value of x is %d\n", x);
    printf("the value of y is %d\n", y);
    printf("the value of *ip is %d\n", *ip);
    
    ip = &y;
    printf("the value of x is %d\n", x);
    printf("the value of y is %d\n", y);
    printf("the value of *ip is %d\n", *ip);
    
    puts("hello world");
    
    return 0;
}


// Pointers
// A variable is a typed and named location in memory
// When we write `int x;` we are allocating memory the size of an integer and naming it `x`
// When we define it as `x = 1`, we are copying that value into the memory location named `x`
// `int y = x` is both a definition and an assignment
    // in this case, `y` has the same value as `x` but is stored in a separate memory location
// You can also assign something as a pointer value, rather than having it store the value itself.
    // `int *ip;` In this case, the variable named `ip` is a pointer to `int`
    // This allocates memory in the size of a pointer
    // The address of the variable integer named `x` is placed in the pointer variable named `ip`
    // `ip = &x;` the `&` is known as a reference operator, but its more commonly called the "address of operator"
    // This will assign the address of `x` to the integer pointer `ip`
// `y = *ip;` this copies the valye pointed to by ip, which currently points to the integer variable x, to the integer variable y
// In this context, the asterisk is called the "pointer de-reference operator", used to get hte value pointed to by the pointer
//
