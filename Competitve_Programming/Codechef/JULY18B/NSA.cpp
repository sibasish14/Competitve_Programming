#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll x=0,y=0,z=0,i,j,k,m,n=s.size();
        ll bef[n+10][27],aft[n+10][27];
        memset(bef,0,sizeof(bef));
        memset(aft,0,sizeof(aft));
        for(k=0;k<n-1;k++)
        {
            i=k+1,j=n-k-2;
            for(m=0;m<26;m++)
            {
                bef[i][m]=bef[i-1][m]+((s[i-1]-97) < m);
                aft[j][m]=aft[j+1][m]+((s[j+1]-97) > m);
            }
            y+=bef[i][s[i]-97];
        }
        ll ans=y;
        for(k=0;k<n;k++)
        {
            for(m=0;m<26;m++)
            {
                x=abs((s[k]-97)-m);
                z=y+(bef[k][m]+aft[k][m])-(bef[k][s[k]-97]+aft[k][s[k]-97]);
                ans=min(ans,x+z);
            }
        }
        cout<<ans<<"\n";
    }
	return 0;
}