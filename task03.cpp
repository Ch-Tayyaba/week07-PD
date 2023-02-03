#include<iostream>
using namespace std;
void upperShape(int rows);
void lowerShape(int rows);
main()
{
    int rows;
    cout << "Enter rows : ";
    cin >> rows;
    upperShape(rows);
    lowerShape(rows);
}
void upperShape(int rows)
{
    int spaces = rows - 1;
    int asteric = 1;
    for(int count = 1 ; count <= rows ; count++)
    {
        for(int count01 = 1 ; count01 <= rows - asteric ; count01++)
        {
            cout << " ";
        }
        for(int count02 = 1 ; count02 <= rows - spaces ; count02++)
        { 
            cout << "*" ;
        }
        cout << endl;
        spaces--;
        asteric++;
    }
}
void lowerShape(int rows)
{
    int spaces = 0;
    int asteric = rows;
    for(int count = 1 ; count <= rows ; count++)
    {
        for(int count01 = 1 ; count01 <= rows - asteric ; count01++)
        {
            cout << " ";
        }
        for(int count02 = 1 ; count02 <= rows - spaces ; count02++)
        { 
            cout << "*" ;
        }
        cout << endl;
        spaces++;
        asteric--;
    }
}