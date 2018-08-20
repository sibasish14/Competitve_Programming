#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ll n,i,j,ans=0,one=0,zero=0;
    cin>>n;
    string s,t;
    cin>>s>>t;
    for(i=0;i<n;i++)
    {
        if(s[i] == '1')
            one++;
        else zero++;
    }
    for(i=0;i<n;i++)
    {
        if(s[i] == '1' && t[i] == '0')
        {
            if(zero > 0)
                ans+=zero;
            one--;
        }
        else if(s[i] == '0' && t[i] == '0')
        {
            if(one > 0)
                ans+=one;
            zero--;
        }
    }
    cout<<ans;
    return 0;
}