///Accepted.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr+3);
        cout << "Case " << i << ": " << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    }
}
