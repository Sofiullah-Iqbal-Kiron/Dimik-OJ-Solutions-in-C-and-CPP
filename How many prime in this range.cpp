#include<iostream>
using namespace std;

int main()
{
    int T, i, j, k, a, b;
    cin >> T;
    for(i=1; i<=T; i++)
    {
        int m=0;
        cin >> a >> b;
        if(a==1)
        {
            a++;
        }
        for(j=a; j<=b; j++)
        {
            int c=1;
            for(k=a; k<=j; k++)
            {
                if(k%j==0)
                {
                    c++;
                }
            }
            if(c==2)
            {
                cout << j << " ";
                m++;
            }
        }
        cout << " = " << m << endl;
    }

    return 0;
}
