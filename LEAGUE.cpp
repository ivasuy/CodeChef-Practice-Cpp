#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--){
        long int n,Ft,St;
        cin >> n ;
        Ft = 3*(n-1);
        St = (((n-1)/2)*3);

        cout << Ft - St << endl;
    }
    return 0;
}