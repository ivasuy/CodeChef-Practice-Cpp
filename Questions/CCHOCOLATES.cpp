#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y,z;
        int ValueOfx, ValueOfy, Answer;
        cin >> x >> y >> z;

        ValueOfx = 5*x;
        ValueOfy = 10*y;

        Answer = (ValueOfx + ValueOfy) / z;
        cout << Answer << endl;
    }

    return 0;
} 