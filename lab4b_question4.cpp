#include <iostream>
using namespace std;
int sum (int x)
{
    if (x>1)
    {
    return (x+sum(x-1));
    }
    else if (x==1)
    {
        return x;
    }
}

int main()
{
    int x;
    cout <<"enter number :";
    cin>>x;
    cout<<"sum :"<<sum(x);
    return 0;
}
