///Accepted.

#include<iostream>
using namespace std;

int main()
{
    int t, i;
    float x;
    cin >> t;
    int days[t];
    for(i=1; i<=t; i++)
    {
        int k=0;
        cin >> x;
        while(x>1)
        {
            k++;
            x/=2;
        }
        days[i] = k;
    }
    for(i=1; i<=t; i++)
    {
        cout << days[i] << " days" << endl;
    }

    return 0;
}
