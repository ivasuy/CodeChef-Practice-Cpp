#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x, y, z, TotalWeightMangoes;
        cin >> x >> y >> z;

        TotalWeightMangoes = z-y;
        cout << TotalWeightMangoes/x << endl;
    }
}