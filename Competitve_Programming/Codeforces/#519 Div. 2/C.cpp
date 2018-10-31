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
        string s;
        cin>>s;
        int i,ans[s.size()+1];
        memset(ans,0,sizeof(ans));
        for(i=1;i<s.size();i++)
        {
            if(s[i] == 'a')
            {
                ans[i]=1;
                ans[i-1]=(ans[i-1] == 1 ? 0 : 1);
            }
        }
        for(i=0;i<s.size();i++)
            cout<<ans[i]<<" ";
    }
    return 0;
}