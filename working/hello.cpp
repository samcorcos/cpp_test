#include <cstdio>
using namespace std;

int main( int argc, char ** argv )
{
    char s[] = {'s','t','r','i','n','g',0};
    // You would get the same result if you defined it as follows:
    // `char s[] = "string";` Which is treated just like the array above.
//    for (int i = 0; s[i]; ++i) {
//        printf("char is %c\n", s[i]);
//    }
    // You can also use pointers because a string is just an array of characters.
    for (char c : s) {
        if (c == 0) break; // breaks when it reaches the end, because the last item in teh array is 0
        printf("char is %c\n", c);
    }
    return 0;
}


/*
Arrays
 
 An array is a fixed-size container
 `int ia[5];` is an int index of length 5
 
 Array elements can also be accessed as if the array were a pointer. The two statements are equivalent:
 `ia[0] = 1;`
    and
 `*ia = 1;`
 
 Arrays can be accessed as if they are pointers
 
 
 `int *ip = ia;` makes `ip` a reference to `ia`
 so, `*ip = 2;` is a reference to the sec
 
 In C++, pointers are strongly typed, so they know the size of what they point to.
 
 So when you increment a pointer, it always increments by the size of the object it's defined with.
 So this assigns the value 3 to the second element of the array. 
 
 `++ip;`
 
 `*ip = 3;` This assigns 3 to the second value of the array, if you previously incremented it
 
 `*(++ip) = 4;`
 This is a common way to increment and define it at the same time.
 
 You can also define them using an initializer list:
 
 `int ia[5] = {1,2,3,4,5};`
 
 In C++ a C-String is simply an array of characters terminated with a 0. This is sometimes called a null-terminated string
 
 
 
*/