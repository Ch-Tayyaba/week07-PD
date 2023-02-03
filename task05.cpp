#include<iostream>
using namespace std;
int dotsInTriangle(int num);
main()
{
    int triangle;
    int dots;
    cout << "Enter Number of Triangle : ";
    cin >> triangle;
    dots = dotsInTriangle(triangle);
    cout << "Total dots in triangle are : " << dots;
}
int dotsInTriangle(int num)
{
    int dots = 1;
    if(num != 1)
    {
        int difference = 2;
        for(int triangle = 1 ; triangle < num ; triangle++)
        {
            dots = dots + difference;
            difference++;
        }
    }
    return dots;
}