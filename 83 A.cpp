///Accepted.

#include<bits/stdc++.h>
using namespace std;

string divide(string &ns, int &dividor, int &rem)
{
    int i;
    rem=0;
    string result;
    if(ns.size()==1)
    {
        int num;
        num=ns[0]-'0';
        result.push_back(num/dividor+'0');
        rem = num%dividor;
        return result;
    }
    rem = ns[0]-'0';
    for(i=1; i<ns.size(); )
    {
        if(rem<dividor && i<ns.size())
        {
            rem=rem*10+(ns[i]-'0');
            i++;
        }
        result.push_back(rem/dividor+'0');
        rem%=dividor;
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string ns;
        cin >> ns;
        bool power = false;
        int rem = 0, dividor=2;

        if(ns=="1")
        {
            power=true;
        }
        else if(ns=="0")
        {
            power=false;
        }

        else
        {
            while(1)
            {
                ns = divide(ns, dividor, rem);
                if(ns=="1" && rem==0)
                {
                    power = true;
                    break;
                }
                else if(rem!=0)
                {
                    power = false;
                    break;
                }
            }
        }
        if(power==true)
        {
            cout <<  "It's a power of 2" << endl;
        }
        else
        {
            cout <<  "Not a power of 2" << endl;
        }

    }
}
