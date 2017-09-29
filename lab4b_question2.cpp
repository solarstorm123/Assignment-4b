#include <iostream>
using namespace std;
void numbers(int x)
{
    if (x>1)
  {
    cout<<x<<endl;
    numbers(x-1);
  }
  else if (x=1){cout <<x;}
}
int main()
{
    int x;
    cout <<"enter n:";
    cin>>x;
    numbers (x);
    return 0;
}
