#include <iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2,int gcd);
main()
{
    int number1, number2, gcd, ans2 ;
    cout << "enter number1: ";
    cin >> number1;
    cout << "enter number2";
    cin >> number2;
    gcd = calculateGCD(number1, number2);
    cout << gcd << endl;
    ans2 = calculateLCM(number1, number2,gcd );
    cout << ans2;
}
int calculateGCD(int number1, int number2)
{
    int greatest;
    int total;
    
    if (number1 > number2)
    {
        greatest = number2;
    }
    else
    {
        greatest = number1 ;
    }
    for (int a = 1; a <= greatest; a++)
    {
        int y=number1%a;
        int z=number2%a;
        if (y==0 && z==0)
        {
             total= a;
        }
       
    }
     return total;
}
int calculateLCM(int number1, int number2,int gcd)
{        

    int LCM;
    LCM =(number1 * number2)/gcd;
    return LCM;
}