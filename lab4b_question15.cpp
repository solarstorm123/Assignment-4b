#include <iostream>
using namespace std;

int findmin(int tab[],int x)
{
    if (x==1)
        return tab[0];
    return min(tab[x-1],findmin(tab,x-1));
}

int findmax(int tab[],int x)
{
    if (x==1)
    return tab[0];
    return max(tab[x-1],findmax(tab,x-1));
}

int main()
{
    int x;int arr[x];int a=0;
    cout<<"enter length of array :";
    cin>>x;
    cout<<"enter elements :";
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }

    cout <<"min element :"<<findmin(arr,x)<<endl;
    cout<<"max element :"<<findmax(arr,x)<<endl;

    return 0;
}
