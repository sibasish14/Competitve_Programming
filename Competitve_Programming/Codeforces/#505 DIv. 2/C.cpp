#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    ll i,ans=0,k,j;
    cin>>s;
    s+=s;
    // cout<<s.size()<<" ";
    for(i=0;i<s.size();i++)
    {
        k=i;
        for(j=i+1;j<s.size();j++,k++)
        {
            if(s[k] != s[j])
                continue;
            break;
        }
        ll tmp=min((ll)s.size()/2,(j-i));
        ans=max(ans,tmp);
        i=j-1;
    }
    cout<<ans;
    return 0;
}