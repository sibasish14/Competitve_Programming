#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll a[n],b[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        for(i=0;i<n;i++)
            b[i]-=a[i];
        for(i=0;i<n;i++)
            if(b[i] != 0)
                break;
        if(i == n)
        {
            cout<<"TAK\n";
            continue;
        }
        ll z;
        for(i=0;i<n-2;i++)
        {
            z=b[i];
            b[i]=0;
            if(z > 0 && (b[i+1] <= 0 || b[i+2] <= 0))
                break;
            b[i+1]-=(2*z);
            b[i+2]-=(3*z);
        }
        for(i=0;i<n;i++)
            if(b[i] != 0)
                break;
        if(i == n)
            cout<<"TAK\n";
        else cout<<"NIE\n";
    }
    return 0;
}