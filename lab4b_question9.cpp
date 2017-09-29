#include <iostream>
using namespace std;
int factorial(int x)
{
    if (x>1)
    {
    int a=x*factorial(x-1);
    return a;
    }
    else{return 1;}
}

int main()
{
    int x;
    cout<<"enter number :";
    cin>>x;
    cout<<"factorial :"<<factorial(x);
return 0;
}
