#include <iostream>
using namespace std;

void print(int tab[],int a,int x)
{
    if (a==(x-1))
        cout<<tab[a];

    else{cout<<tab[a]<<" "<<endl;
    print(tab,a+1,x);}
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
    cout<<"entered elements :"<<endl;
    print(arr,0,x);
    return 0;

}
