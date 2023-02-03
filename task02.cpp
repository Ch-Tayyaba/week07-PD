#include<iostream>
using namespace std;
void printAsterisk(int rows);
main()
{
    int rows ;
    cout << " Enter Number of Rows : ";
    cin >> rows;
    printAsterisk(rows);

}
void printAsterisk(int rows)
{
    for(int num01 = 1 ; num01 <= rows ; num01 = num01 + 1 )
    {
        for(int num02 = rows ; num02 >= num01 ; num02 = num02 - 1 )
        {
            cout << "*" ;
        }
        cout << endl;
    }
}