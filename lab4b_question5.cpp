#include <iostream>
using namespace std;
int sum1(int x)
{
    if (x>0)
    {
    int a=x+sum1(x-2);
    return a;
    }
    else {return 0;}

}

int sum2 (int x)
{
   if (x>0)
   {
   int b=(x-1)+sum1(x-3);
   return b;
   }
   else {return 0;}
}

int main()
{
    int x;
    cout <<"enter number :";
    cin>>x;
    if (x%2==0)
    {
        cout <<"sum of even nos. between :"<<sum1(x)<<endl;     //1 and n included.
        cout<<"sum of odd nos. between :"<<sum2(x)<<endl;
    }
    else
        {
        cout <<"sum of even nos. between :"<<sum2(x)<<endl;
        cout<<"sum of odd nos. between :"<<sum1(x)<<endl;
        }

    return 0;
}
