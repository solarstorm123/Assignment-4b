#include <iostream>
using namespace std;
int sum(int x)
{
    if (x>0)
    {
    int a=(x%10)+sum(x/10);
    return a;
    }
    else{return 0;}
}

int main()
{
    int x;
    cout<<"enter number :";
    cin>>x;
    cout<<"sum of digits :"<<sum(x);

    return 0;
}
