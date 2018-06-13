#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,m,i,j,ans=0;
	cin>>n>>m;
	ll a[n],b[m];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<m;i++)
		cin>>b[i];
	i=0,j=0;
	ll s1=a[0],s2=b[0];

	// cout<<s1<<" "<<s2<<"\n";
	while(i<n && j<m)
	{
		if(s1==s2)
		{
			ans++;
			s1=a[++i],s2=b[++j];
		}
		if(s1 < s2)
		{
			i++;
			s1+=a[i];
			// cout<<s1<<" "<<s2<<"\n";
			if(s1 == s2)
			{
				ans++;
				s1=a[++i],s2=b[++j];
			}
		}
		else if(s1 > s2)
		{
			j++;
			s2+=b[j];
			// cout<<s1<<" "<<s2<<"\n";
			if(s1 == s2)
			{
				ans++;
				s1=a[++i],s2=b[++j];
			}
		}
	}
	cout<<ans;
	return 0;
}
