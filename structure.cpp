#include <iostream>
#include <stdio.h>
using namespace std ;

    struct Rectangle
{
    int lenght;  // 4bytes
    int breadth; // 4bytes
};

// decleration variable
// struct Rectangle r1,r2,r3;

int main()
{
    struct Rectangle r1={10,5};
    
/*r1.lenght = 15;
    r1.breadth = 10;*/
    

    cout << r1.lenght << endl;
    cout << r1.breadth << endl;

    return 0;
}
