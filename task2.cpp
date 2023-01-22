#include <iostream>
using namespace std;
main()
{
    int fibo;
    int number1;
    int number2;
    cout << "enter number1: ";
    cin >> number1;
    cout << "enter number2: ";
    cin >> number2;
    cout << "enter series: ";
    cin >> fibo;
cout << number1 << ","<< number2;
    for (int count= 1;count <=fibo-2;count =count+1)
    {
           int sum;
       sum=number1+number2;
       cout << ","<< sum;
         number1=number2;
           number2=sum;
    }

}