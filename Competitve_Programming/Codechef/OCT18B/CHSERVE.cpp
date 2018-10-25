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
        ll p,q,k;
        cin>>p>>q>>k;
        ll tot=p+q;
        ll z=(p+q)/k;
        if(z%2 == 0)
            cout<<"CHEF\n";
        else cout<<"COOK\n";
    }
    return 0;
}