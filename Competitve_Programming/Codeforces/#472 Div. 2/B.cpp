#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i,j,k;
	cin>>n>>m;
	string s[n];
	for(i=0;i<n;i++)
		cin>>s[i];

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i] != s[j])
			{
				for(k=0;k<s[i].size();k++)
				{
					if((s[i][k] == '#') && (s[i][k] == s[j][k]))
					{
						cout<<"No\n";
						return 0;
					}
				}
			}
		}
	}
	cout<<"Yes\n";
	return 0;
} 