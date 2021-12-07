/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a=10;
    int *aptr=&a;
    
    cout<<*aptr<<endl;
    *aptr=20;
    cout<<a<<endl;
    
    
    return 0;
}
