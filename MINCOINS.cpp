#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x,Nof10,Nof5;
        cin >> x ;
        Nof10 = x%10;
        Nof5 = Nof10/5;

        if ( x%10 == 0 )
        {
            cout << x/10 << endl;
        }
        else if ( x%5 == 0 )
        {
            cout << x/10 + Nof5 << endl;
        }
        else 
        {
            cout << -1 << endl;
        }
    }
    return 0;
}