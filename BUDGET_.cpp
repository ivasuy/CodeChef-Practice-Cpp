#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x,y,z;
        cin>>x>>y;
        z=30*y;

        if(z>x)
        {
            cout<<"NO"<<endl;
        }

        else
        {
            cout<<"YES"<<endl;
        }

    }
    return 0;
}