#include<iostream>
#include <cmath>

using namespace std;

void MinCars(int n)
{
    if (n>4){
        cout << ceil( (float) n/4) << endl;
    }
    else{
        cout << 1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        MinCars(n);
    }
    return 0;
}