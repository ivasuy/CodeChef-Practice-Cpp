#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x;
        cin>>x;
        if(1<=x && x<=100)
        {
            cout<<100-x<<endl;
        }
    }
    return 0;
}