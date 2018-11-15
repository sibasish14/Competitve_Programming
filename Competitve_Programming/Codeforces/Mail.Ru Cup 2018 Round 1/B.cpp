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
    ll n,i;
    cin>>n;
    ll a[n],mx=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    if(a[0] != 0)
    {
        cout<<"1";
        return 0;
    }
    for(i=1;i<n;i++)
    {
        if(a[i] > mx+1)
        {
            cout<<i+1;
            return 0;
        }
        mx=max(mx,a[i]);
    }
    cout<<-1;
    return 0;
}