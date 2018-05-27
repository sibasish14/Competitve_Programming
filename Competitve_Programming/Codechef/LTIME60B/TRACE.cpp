#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

ll a[200][200];

int solve(int i,int j,int k)
{
	int z=0;
	for(int m=0;m<=k;m++)
		z+=a[i+m][j+m];
	return z;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j,k,ans=0;
		cin>>n;

		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>a[i][j];
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				for(k=0;i+k<n && j+k<n;k++)
					ans=max(ans,solve(i,j,k));
		cout<<ans<<"\n";
	}   	
	return 0;
}
