#include<iostream>

using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        
        int x,y;
        cin>>x;
        if (0.1*x>100){

            cout<<0.1*x<<endl;
        }
        else
        {
            cout<<100<<endl;
        }

    }

    return 0;
}