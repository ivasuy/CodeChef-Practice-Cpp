#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x,y,fastestime;
        cin >> x >> y;
        fastestime = 1.07 * x;

        if( y <= fastestime )
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}