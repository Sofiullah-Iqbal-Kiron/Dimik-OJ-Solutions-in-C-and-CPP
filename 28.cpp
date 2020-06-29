#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n, i, j;
        cin >> n;
        int array[n], k=1;
        for(i=0; i<n; i++)
        {
            cin >> array[i];
        }
        for(i=0; i<n-1; i++)
        {
            if(array[i]<=array[i+1])
            {
                k++;
            }
        }
        if(k==n)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}
