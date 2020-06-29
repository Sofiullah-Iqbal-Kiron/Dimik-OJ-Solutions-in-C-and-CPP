///Accepted. Bokac***a logic.

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int T, i;
    cin >> T;
    for(i=0; i<T; i++)
    {
        double r1, r2, B;
        double crr, rrr;
        cin >> r1 >> r2 >> B;
        if(r1<r2)
            rrr = 0.00;
        else
        {
            rrr = (((r1+1)-r2)/B)*6;
        }
        crr = (r2/(300-B))*6;
        cout <<fixed << setprecision(2) << crr << " " << rrr << endl;
    }

}
