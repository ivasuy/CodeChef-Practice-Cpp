#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y,counter;
        counter = 0;
        cin >> x >> y;
        while(x!=y)
        {
            if (x>y)
            {
                y=y+2;
            }
            else if(x<y)
            {
                x++;
            }
            counter++;
        }
        cout << counter << endl;
    }
    return 0;
}