#include<iostream>

using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){

        int x, n;
        cin>>x>>n;

        if (n%x == 0){
            cout<<"Yes"<<endl;
        }
        else{
           cout<<"No"<<endl;
        }
    }

    return 0;
}