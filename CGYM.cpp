#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--){
        int x, y, z;
        cin >> x >> y >> z;
        

        if(x <= z && x+y > z ){
            cout << 1 << endl;
        }
        else if( x+y <= z ){
            cout << 2 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }

    return 0;
}