// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

 int fact(int x)
{
    if (x>1)
    {
        return x*fact(x-1);
    }
    else
    {
        return 1;
    }
}

int main() 
{
    int a;
    cout<<"Enter any Number whose Factorial is to be found\n";
    cin>>a;
    cout<<"Here Factorial of "<<a<<" is "<<fact(a);
   
}
