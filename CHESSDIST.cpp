#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;

        cout << std::max ( abs (x1-y1), abs (x2-y2) ) << endl;
    }
    
    return 0;
}