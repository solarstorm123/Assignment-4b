#include <iostream>
using namespace std ;

int lcm(int a, int b);


int main()
{
    int num1, num2, LCM;

    cout<<"Enter any two numbers to find lcm: ";
    cin>>num1;
    cin>>num2;

    if(num1 > num2)
        LCM = lcm(num2, num1);
    else
        LCM = lcm(num1, num2);

    cout<<"LCM of "<<num1<<" and "<<num2<<" = "<<LCM;

    return 0;
}


int lcm(int a, int b)
{
    static int multiple = 0;


    multiple += b;

    if((multiple % a == 0) && (multiple % b == 0))
    {
        return multiple;
    }
    else
    {
        return lcm(a, b);
    }
}
