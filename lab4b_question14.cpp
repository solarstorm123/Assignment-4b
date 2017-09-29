#include <iostream>
using namespace std;

    int sum(int tab[],int len=0)
{
   if (len<0)
    return 0;
   return tab[len-1]+sum(tab,len-1);
}



int main()
{
    int x;int arr[x];
    cout<<"enter length of array :";
    cin>>x;
    cout<<"enter elements :"<<endl;
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }

    cout<<"sum of elements :"<<sum(arr,x);

    return 0;
}


