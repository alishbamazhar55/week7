#include <iostream>
using namespace std;
int totaldigits(int number);
main()
{
    int number;
    int result;
    cout << "number is: ";
    cin >> number;
    result=totaldigits(number);
    cout << result;

}
int totaldigits(int number)
{ 
    int count=0;
    while (number >0)
    { 
        number=number/10;
        count =count+1;

    }
    return count; 
    


}