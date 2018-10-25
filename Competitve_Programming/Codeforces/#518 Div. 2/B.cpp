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
        ll b,i;
        cin>>b;
        vector<ll> v;
        v.push_back(b);
        if(b != 1)
            v.push_back(1);
        for(i=2;i*i<=b;i++)
        {
            if(b%i == 0)
            {
                v.push_back(i);
                if(i != b/i)
                    v.push_back(b/i);
            }
        }
        cout<<v.size();
    }
    return 0;
}