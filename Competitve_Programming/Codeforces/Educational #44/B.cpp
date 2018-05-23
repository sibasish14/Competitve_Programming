#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m,i,j,c;
	cin>>n>>m;
	char a[n][m];
	int chk[m];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<m;i++)
		chk[i]=0;

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j] == '1')
				chk[j]++;
		}
	}
	for(i=0;i<n;i++)
	{
		c=1;
		for(j=0;j<m;j++)
		{
			if(a[i][j]=='1' && chk[j]<=1)
			{
				c=0;
				break;
			}
		}
		if(c==1)
			break;
	}

	if(c==0)
		cout<<"NO\n";
	else
		cout<<"YES\n";
	return 0;
}
