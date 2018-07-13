#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i;
    cin>>n;
    ll a,b;
    cin>>a>>b;
    a=max(a,b);
    for(i=1;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        if(x <= y)
            swap(x,y);
        if(x <= a)
            a=x;
        else if(y <= a)
            a=y;
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
	return 0;
}
