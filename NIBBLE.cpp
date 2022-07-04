#include<iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        
        int n, x;
        cin >> n;
        x = n%4;

        if( x == 0 ){

            cout << "GOOD" << endl;
        }
        else{

            cout << "NOT GOOD" << endl;
        }
    }    

    return 0;
}