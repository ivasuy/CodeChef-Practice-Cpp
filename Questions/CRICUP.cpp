#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
    {
        int x, y, d, SkillDifference;
        cin >> x >> y >> d;
        SkillDifference = x - y;

        if( SkillDifference <= d)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;

}