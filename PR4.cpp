#include <iostream>
using namespace std;    

int main()
{
    int a = 10, b = 35; // 4 bytes
    int z;

    cout << " Enter Value of Z : ";
    
    cin>>z;

    cout << "Value of a : " << a << " Address of a : " << &a << endl;
    cout << "Value of b : " << b << " Address of b : " << &b << endl;
    cout << "Value of Z : " << z << " Address of z : " << &z << endl;

    return 0;
}