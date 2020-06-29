//Using function prototype.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int T, i, Xc, Yc, r, X, Y;
    cin >> T;
    for(i=1; i<=T; i++)
    {
        cin >> Xc >> Yc;
        cin >> r;
        cin >> X >> Y;
        if((sqrt(((pow((X-Xc), 2))+(pow((Y-Yc), 2)))/1.0))<r)
        {
            cout << "The point is inside the circle" << endl;
        }
        else
        {
            cout << "The point is not inside the circle" << endl;
        }
    }

    return 0;
}
