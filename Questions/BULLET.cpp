#include<iostream>

using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        
        int x,y,z,T_Time,ans;
        cin>>x;
        cin>>y;
        cin>>z;

        T_Time = y/x;

        ans = max(0,z-T_Time);
        cout<<ans<<endl;
    }

    return 0;
}