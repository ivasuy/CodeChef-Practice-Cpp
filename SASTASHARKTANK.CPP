#include<iostream>

using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){

        int A, B;
        int x,y;
        cin>>x>>y;

        A=10*x;
        B=5*y;

        if (A > B){
            cout<<"First"<<endl;
        }
        else if (A < B){
           cout<<"Second"<<endl;
        }
         else {
            cout<<"Any"<<endl;
        }
    }

    return 0;
}
