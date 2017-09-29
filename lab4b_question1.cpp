#include <iostream>
using namespace std;
int a=1;
int power (int x,int y)
{
    if (y>1)
    {
    a=x*power(x,y-1);
    return a;
    }

    else if(y=1)
    {
        return x;
    }
}

int main()
{
    int x,y;
    cout<<"enter base :";
    cin>>x;
    cout<<"enter power :";
    cin>>y;
    cout<<power(x,y);

return 0;
}
