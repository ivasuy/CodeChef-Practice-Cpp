#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, TotalCost;
        cin >> n;
        TotalCost = n*50;

        cout << TotalCost - (TotalCost*.7) << endl;

    }
    return 0;
}