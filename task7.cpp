#include <iostream>
using namespace std;
int digitsum(int number);
main()
{
int number;
int digit;
int result;
cout << "enter number: ";
cin >> number;

  result=digitsum(number);
  cout << result;
}
int digitsum(int number )
{ 
     int sum=0;
    while (number > 0)
    {
      int x =number%10;
      number=number/10;
      sum=sum+x;
      
    }
    return sum;

}