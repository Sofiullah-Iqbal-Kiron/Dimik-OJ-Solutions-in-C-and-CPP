#include<iostream>
using namespace std;

int main()
{
    int T, i, first, last;
    cin >> T;
    int n[T], sum[T];
    for(i=1; i<=T; i++)
    {
        cin >> n[i];
        first = (n[i]-n[i]%10000)/10000;
        last = n[i]%10;
        sum[i]=first+last;
    }
    for(i=1; i<=T; i++)
    {
        cout << "Sum " << i << ": " << sum[i] << endl;
    }

    return 0;
}
