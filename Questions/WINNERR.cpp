#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int Pa,Pb,Qa,Qb;
        cin >> Pa >> Pb >> Qa >> Qb ;

        if (Pa > Qa)
        {
            if (Pb > Qb){
            cout << "Q" << endl;
            }
            else
            {
                cout << "P" << endl;
            }
        }

        else if (Pa < Qa)
        {
            if (Pb < Qb)
            {
            cout << "P" << endl;
            }
            else {
                cout << "Q" << endl;
            }
        }
        else if (Pa == Qa || Pb == Qb)
        {
            cout << "Tie" << endl;
        }
    }
    return 0;
}