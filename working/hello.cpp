#include <cstdio>
using namespace std;

int main( int argc, char ** argv )
{
    int i;
    // you can also build and assign on the same line
    // `int i = 7;`
    // `const` means that a variable is "read only" and cannot be changed once it's defined.
    // `const int i = 7`, this is very common and very useful.
    i = 7;
    printf("x is %d\n", i); // The `%d` is a token that tells `printf` where to put the `x` value
    
    return 0;
}


