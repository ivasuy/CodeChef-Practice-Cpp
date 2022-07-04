#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    if(t>=1 && t<=100)
    {
        while(t--)
        {
            int x,y,c;
            cin>>x>>y;

            if((x>=1 && x<=1000) && (y>=1 &&y<=1000))
            {
                c=x*y;
                if(c>=100)
                {
                    cout<<c/100<<endl;
                    }
                    else
                    {
                        cout<<0<<endl;
                        }
            }
        }
    }

    return 0;
}