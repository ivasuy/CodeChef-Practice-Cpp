#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, SumOfab, thirdNumber;
        cin >> a >> b;

        SumOfab = a+b;
        thirdNumber = abs(SumOfab-21);

        if ( thirdNumber>=1 && thirdNumber <= 10){
            cout << thirdNumber << endl;
        }
        else {
            cout << -1 << endl;
        }

    }
    return 0;
}