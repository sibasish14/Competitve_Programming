#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,j;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        if(n & 1)
        {
            cout<<"NO\n";
            continue;
        }
        i=0,j=n/2;
        for(i=0;i<n/2;i++)
        {
            if(a[i] == -1 && a[i+j] == -1)
                a[i]=a[i+j]=1;
            else if(a[i] == -1)
                a[i]=a[i+j];
            else if(a[i+j] == -1)
                a[i+j]=a[i];
            else if(a[i] != a[i+j])
            {
                cout<<"NO\n";
                break;
            }
        }
        if(i == n/2)
        {
            cout<<"YES\n";
            for(i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}