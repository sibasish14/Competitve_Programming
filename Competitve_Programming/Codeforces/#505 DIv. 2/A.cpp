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
    string s;
    cin>>n>>s;
    if(n == 1)
    {
        cout<<"Yes\n";
        return 0;
    }
    map<char,ll> mp;
    for(i=0;i<n;i++)
        mp[s[i]]++;
    for(auto z:mp)
    {
        if(z.second > 1)
        {
            cout<<"Yes\n";
            return 0;
        }
    }
    cout<<"No\n";
    return 0;
}