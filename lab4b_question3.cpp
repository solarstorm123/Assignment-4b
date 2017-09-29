#include <iostream>
using namespace std;
void cat(int x,int y)
{
   if (x<y)
    {if (x%2==0)
    {

        cout<<x<<"          "<<x+1<<endl;
        cat(x+2,y);
    }
    else
    {

      cout<<x<<"          "<<x+1<<endl;
        cat(x+2,y);
    }
    }
    else if(x==y)
    {
        cout<<y;
    }
}

int main()
{
    int x ,y;
    cout<<"enter lower limit :";
    cin>>x;
    cout<<"enter higher limit :";
    cin>>y;
    if(x%2==0)
    cout <<"even:     odd:"<<endl;
    else {cout<<"odd:     even:"<<endl;}
    cat(x,y);
    return 0;
}
