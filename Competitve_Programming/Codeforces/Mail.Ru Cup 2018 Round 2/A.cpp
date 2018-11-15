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
    ll t=1;
    // cin>>t;
    while(t--)
    {
        ll s,n,i,f=0;
        cin>>n>>s;
        ll a[n],b[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
           cin>>b[i];
        if(a[0] == 0)
        {
            cout<<"NO";
            return 0;
        }  
        if(a[s-1] == 1)
        {
            cout<<"YES";
            return 0;
        }
        for(i=s;i<n;i++)
        {
            if(a[i] == 1 && b[i] == 1)
            {
                f=1;
                break;
            }
        }
        if(!f)
        {
            cout<<"NO";
            return 0;
        }
        if(b[s-1] == 0)
        {
            cout<<"NO";
            return 0;
        }
        cout<<"YES";
    }
    return 0;
}