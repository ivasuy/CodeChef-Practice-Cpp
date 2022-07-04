#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,m,Diffofnm,DiffPlusN;
        cin >> n >> m;
        Diffofnm = n - m;
        DiffPlusN = Diffofnm + n;

        if( n > m)
        {
            cout << DiffPlusN << endl;
        }
        else
        {
            cout << n <<endl;
        }
    }
    return 0;

}