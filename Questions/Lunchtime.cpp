#include<iostream>

using namespace std;

int main(){
    
    int t,x;
    cin>>t;
    
    while(t--){

        cin>>x;
        if( x>=1 && x<=4){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }

    return 0;
}