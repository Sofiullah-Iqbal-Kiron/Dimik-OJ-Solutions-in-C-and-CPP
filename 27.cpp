///Accepted.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t, i;
    cin >> t;
    int n[t], n1[t], n2[t], n3[t];
    for(i=1; i<=t; i++)
    {
        cin >> n[i];
        if(n[i]>=100 && n[i]<=999)
        {
            n1[i]=n[i]%10;
            n2[i]=(n[i]/10)%10;
            n3[i]=(n[i]/100)%10;
        }
    }
    for(i=1; i<=t; i++)
    {
        if(pow(n3[i], 3)+pow(n2[i], 3)+pow(n1[i], 3)==n[i])
        {
            cout << n[i] << " is an armstrong number!" << endl;
        }
        else
        {
            cout << n[i] << " is not an armstrong number!" << endl;
        }
    }

    return 0;
}
