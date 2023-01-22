#include <iostream>
using namespace std;
float calculatemoney(int age, float price, int tprice);
main()
{
    int age;
    float price;
    int tprice;
    float result;
    float total;
    cout << "enter age: ";
    cin >> age;
    cout << "enter price: ";
    cin >> price;
    cout << "enter price of toy: ";
    cin >> tprice;
    result = calculatemoney(age, price, tprice);
    if (result > price)
    {

        total = result - price;
        cout << "yes!" << endl
             << total;
    }
    if (result < price)
    {
        total = price - result;
        cout << "no!" << endl
             << total;
    }
}
float calculatemoney(int age, float price, int tprice)
{
    int even;
    int odd;
    even = age / 2;
    odd = age - even;
    float final = 0;
    float mul;
    int even_m = 0;

    float final1;
    float total1;
    for (int count = 1; count <= even; count = count + 1)
    {

        even_m = even_m + 10;
        final = even_m + final;
    }
    for (int count = 1; count <= odd; count = count + 1)
    {

        mul = tprice * odd;
    }

    final1 = final - even;
    total1 = final1 + mul;
    return total1;
}