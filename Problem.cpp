#include<iostream>
using namespace std;

int main()
{
    int i, cnt = 0;
    for(i=1000; i>=1; i--)
    {
        if(cnt == 4)
        {
            cout << i << "\t" << endl;
            cnt = 0;
        }
        else
        {
            cout << i << "\t";
            cnt++;
        }
    }

    return 0;
}