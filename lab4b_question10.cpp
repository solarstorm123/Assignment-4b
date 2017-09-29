#include <iostream>
using namespace std;
int fibo(int x)
{
    if (x>2)
    {
        int a=fibo(x-1)+fibo(x-2);
        return a;
    }
    else if (x==2)
        return 1;

    else{return 0;}
}

int main()
{
    int x;
    cout<<"enter n :";
    cin>>x;
    cout<<x<<"th fibonacci term :"<<fibo(x);

    return 0;
}
