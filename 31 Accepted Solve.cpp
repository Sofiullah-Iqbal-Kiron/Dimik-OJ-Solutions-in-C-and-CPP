///Accepted.

#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int m=0; m<T; m++)
    {
        int N;
        cin >> N;
        if(N<28)
        {
            cout << "6";
        }
        else if(N<496)
        {
            cout << "6\n" << "28";
        }
        else if(N<8121)
        {
            cout << "6\n" << "28\n" << "496";
        }
        else if(N<33550336)
        {
            cout << "6\n" << "28\n" << "496\n" << "8128";
        }
        else if(N<=400000000)
        {
            cout << "6\n" << "28\n" << "496\n" << "8128\n" << "33550336";
        }
        cout << endl;
        if(m==(T-1))
        {
            return 0;
        }
        else
        {
            cout << endl;
        }
    }
}
