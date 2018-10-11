#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

map<ll,ll> mp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i;
    cin>>n;
    char s[n];
    for(i=0;i<n;i++)
        s[i]='?';
    ll a[n],unique=0,multi=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto z:mp)
    {
        if(z.second == 1)
            unique++;
        if(z.second > 2)
            multi++;
    }   
    if(unique%2 == 0)
    {
        cout<<"YES\n";
        ll z=unique/2;
        for(i=0;i<n;i++)
        {
            if(mp[a[i]] == 1)
            {
                if(z)
                {
                    cout<<"A";
                    z--;
                }
                else cout<<"B";
            }
            else cout<<"B";
        }
    }
    else if(multi)
    {
        cout<<"YES\n";
        ll z=unique/2,f=0,add=0;
        for(i=0;i<n;i++)
        {
            if(mp[a[i]] == 1)
            {
                if(z)
                {
                    s[i]='A';
                    z--;
                }
                else s[i]='B';
            }
            if(mp[a[i]] == 2)
                s[i]='B';
            if(mp[a[i]] > 2)
            {
                s[i]='B';
                add=a[i];
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i] == add)
            {
                if(!f)
                {
                    s[i]='A';
                    f=1;
                }
            }
            if(f) break;
        }
        for(i=0;i<n;i++)
            cout<<s[i];
    }
    else cout<<"NO\n";
    return 0;
}