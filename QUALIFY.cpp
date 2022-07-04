#include<iostream>

using namespace std;

void QualifyRound( int x, int a , int b)
{
   if( a + b*2 >= x ){
       cout << "Qualify" << endl;
   }
   else{
       cout << "NotQualify" << endl;
   }
}

int main()
{
    int t;
    cin >> t;

    while( t-- )
    {
        int a, b, x;
        cin >> x >> a >> b;

        QualifyRound(x,a,b);
    }

    return 0;
}