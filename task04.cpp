#include<iostream>
using namespace std;
void amplify(int num);
main()
{
    int number;
    cout << "Enter Number to amplify : ";
    cin >> number;
    amplify(number);
}
void amplify(int num)
{
    int num01;
    for(int count = 1 ; count <= num ; count++)
    {
        if(count % 4 == 0)
        {
            num01 = count;
            num01 = 10 * num01;
            cout << num01 << " _ ";

        }
        else
        {
            cout << count << " _ ";
        }
    }
}