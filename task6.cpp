#include <iostream>
using namespace std;
void printpercentage(int number);
main()
{
    int number;
    cout << "enter number: ";
    cin >> number;
    printpercentage(number);
}
void printpercentage(int number)
{
    int num1;
    float count1 = 0;
    float count2 = 0;
    float count3 = 0;
    float count4 = 0;
    float count5 = 0;
    float per1 ;
    float per2;
    float per3;
    float per4;
    float per5;
    

    for (int count = 1; count <= number; count++)
        
    {
        cout << "enter number1: ";
           cin >> num1;
        if (num1 >= 0 && num1< 200)
        {
            count1 = count1 + 1;
        }
        else if (num1 >= 200 && num1 <= 399)
        {
            count2 = count2 + 1;
        }
        else if (num1>= 400 && num1 <= 599)
        {
            count3 = count3 + 1;
        }
        else if (num1 >= 600 && num1 <= 799)
        {
            count4 = count4 + 1;
        }
        else if (num1 >= 800)
        {
            count5 = count5 + 1;
        }
    }
        per1 = (count1 / number)*100.00 ;
        per2 = (count2 / number) * 100.00;
        per3 = (count3 / number) * 100.00;
        per4 = (count4 / number) * 100.00;
        per5 = (count5 / number) * 100.00;
        cout << per1 << endl;
        cout << per2 << endl;
        cout << per3 << endl;
        cout << per4 << endl;
        cout << per5 << endl;
}
    