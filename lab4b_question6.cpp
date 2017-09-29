#include <iostream>
#include <cmath>
using namespace std;

int digits(int x)
{
    int n=0;
    while (x>0)
    {
        x=x/10;
        n++;
    }
    return n;
}
int reverse1(int x)
{
    if (x>0)
    {
    int a=(x%10)*pow(10,digits(x)-1)+reverse1(x/10);
    return a;
    }
    else{return 0;}
}


int main()
{
    int x;
    cout<<"enter number :";
    cin >>x;
    cout<<reverse1(x);

    return 0;

}
