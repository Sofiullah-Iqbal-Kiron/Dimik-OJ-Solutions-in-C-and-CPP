///This submission will be judge later.

#include<bits/stdc++.h>
using namespace std;

double percent(int how_many, int n)
{
    return (double)((100.00*how_many)/n);
}

int hy(int arr[], int n, double average)
{
    int i, c=0;
    for(i=0; i<n; i++)
    {
        if(arr[i]>average)
        {
            c++;
        }
    }
    return c;
}

double ae(int arr[], int n)
{
    int i;
    double sum = 0.0;
    for(i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    return (double)sum/n;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, average, how_many;
        cin >> n;
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        average = ae(arr, n);
        how_many = hy(arr, n, average);
        cout << fixed << setprecision(3) << percent(how_many, n) << "%" << endl;
    }
}
