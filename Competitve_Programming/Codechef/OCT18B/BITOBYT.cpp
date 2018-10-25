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
        ll n;
        cin>>n;
        n--;
        ll x,y;
        x=n/26;
        y=n%26;
        if(y < 2)
            cout<<(1LL << x)<<" 0 0\n";
        else if(y >= 2 && y < 10)
            cout<<"0 "<<(1LL << x)<<" 0\n";
        else
            cout<<"0 0 "<<(1LL << x)<<"\n";
    }
    return 0;
}