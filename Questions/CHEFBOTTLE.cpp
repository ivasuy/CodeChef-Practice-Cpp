#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, k, WaterFiled;
        cin >> n >> x;
        cin >> k;
        WaterFiled = k/x;

        if( k>x && n>WaterFiled )
        {
            cout << WaterFiled << endl;
        }
        else if( k>x && n<WaterFiled )
        {
            cout << n << endl;
        }
        else
        {
            cout << 0 << endl ;
        }

    }
    return 0;
}