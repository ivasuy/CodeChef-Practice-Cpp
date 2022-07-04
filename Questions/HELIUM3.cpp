#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    if (t>=1 && t<=1000)
    {
        while(t--)
        {
            int a,b,x,y;
            cin>>a>>b>>x>>y;

            if((a>=1 && a<=1000) && ((b>=1 && b<=1000)) && (x>=1 && x<=1000) && (y>=1 && y<=1000))
            {
                if(a*b<=x*y)
                {
                    cout<<"YES"<<endl;
                    }
                    else
                    {
                        cout<<"NO"<<endl;
                        }
            }
            
        }
    }
    return 0;
}