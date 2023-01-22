#include <iostream>
using namespace std;
int frequency(int number ,int digit);
main()
{
int number;
int digit;
int result;
cout << "enter number: ";
cin >> number;
cout << "enter digit";
cin >> digit;
  result=frequency(number,digit);
  cout << result;
}
int frequency(int number ,int digit)
{ 
       int count =0;
    while (number > 0)
    {
       if (number%10==digit)
        count =count +1;
      number=number/10;
      
    }
    return count;

}