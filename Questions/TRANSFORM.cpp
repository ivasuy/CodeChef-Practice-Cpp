#include<iostream>

using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){

        int x,z;
        cin>>x;

        z=x%3;
        
        if (z == 0){
            cout<<"NORMAL"<<endl;
        }
        else if (z == 1){
           cout<<"HUGE"<<endl;
        }
         else {
            cout<<"SMALL"<<endl;
        }
    }

    return 0;
}
