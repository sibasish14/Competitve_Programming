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
        ll L,R,i,ans=0;
        cin>>L>>R;
        for(i=L;i<=R;i++)
            if(i%10==2 || i%10==3 || i%10==9)
                ans++;
        cout<<ans<<"\n";
    }
	return 0;
}
