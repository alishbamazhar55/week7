#include <iostream>
using namespace std;
float calculatePrice(float money , int year);
main()
{
    float money;
    int year;
    float result;
    float total;
    cout <<"enter inherited money: ";
    cin >> money;
    cout << "enter year: ";
    cin >> year;
    result=calculatePrice( money , year);
    if (result < money)
    {
         total= money -result;
        cout << "yes! he will live a careful life and will have "<< total << "dollars left";
    }
    if (result > money)
    {
           total= result-money;
         cout << "he will need "<< total <<  "dolars to survive";
    }
}
float calculatePrice(float money , int year)
{
    int price1=0;
    int price2=0;
    float price;
    for (int count =1800;count <=year;count =count+2)
    {
        price1=price1+12000;
    
    }
    for (int count =1801, age=19 ;count <=year ; count =count+2 ,age=age+2 )
    {
        price2=price2 +(12000 +(50*age));
        
    }
     price=price1+price2;
     return price;
}