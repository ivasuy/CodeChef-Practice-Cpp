#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        if(n<=4){ 
            cout<<n<<endl;
        }
        else {
            cout<<n-(n/5)<<endl;
        }
    }

return 0;
}