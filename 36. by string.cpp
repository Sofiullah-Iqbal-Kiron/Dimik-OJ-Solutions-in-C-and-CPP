#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s, ss;
        cin >> s;
        bool lz=true;
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i]!='0')
            {
                lz=false;
            }
            if(lz==false)
            {
                ss.push_back(s[i]);
            }
        }
        cout << ss << endl;
    }
}

