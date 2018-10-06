#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m,i,j;
    cin>>n>>m;
    char s[1010][1010],ans[1010][1010];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            ans[i][j]='.';
    for(i=1;i<n-1;i++)
    {
        for(j=1;j<m-1;j++)
        {
            if(s[i-1][j-1]=='.' || s[i-1][j]=='.' || s[i-1][j+1]=='.')
                continue;
            if(s[i][j-1]=='.' || s[i][j+1]=='.')
                continue;
            if(s[i+1][j-1]=='.' || s[i+1][j]=='.' || s[i+1][j+1]=='.')
                continue;
            ans[i-1][j-1]=ans[i-1][j]=ans[i-1][j+1]='#';
            ans[i][j-1]=ans[i][j+1]='#';
            ans[i+1][j-1]=ans[i+1][j]=ans[i+1][j+1]='#';
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s[i][j] != ans[i][j])
            {
                cout<<"NO\n";
                return 0;
            }
        }
    }
    cout<<"YES\n";
    return 0;
}