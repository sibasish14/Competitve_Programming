#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,i,j,ans=INT_MAX;
    cin>>n>>k;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    for(i=0;i<=n-k;i++)
    {
        int tmp=s[i]-96,f=1,z=i;
        for(j=i+1;j<n;j++)
        {
            if(f == k)
                break;
            if((int)s[z]+2 <= (int)s[j])
            {
                // cout<<i<<" "<<z<<" "<<j<<"\n";
                tmp+=(s[j]-96);
                z=j;
                f++;
            }
        }
        // cout<<z<<" ";
        // cout<<tmp<<" ";
        if(f == k)
            ans=min(tmp,ans);
    }
    if(ans != INT_MAX)
        cout<<ans;
    else
        cout<<-1;
    return 0;
}
