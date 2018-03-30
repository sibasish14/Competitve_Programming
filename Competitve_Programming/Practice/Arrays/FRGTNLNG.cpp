#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i,j,l,m=0;
		cin>>n>>k;
		string s1[n];
		for(i=0;i<n;i++)
			cin>>s1[i];
		string s2[2505];
		for(i=0;i<k;i++)
		{
			cin>>l;
			for(j=0;j<l;j++)
				cin>>s2[m++];
		}
		for(i=0;i<n;i++)
		{
			int f=0;
			for(j=0;j<m;j++)
			{
				if(s1[i] == s2[j])
					f=1;
			}
			if(f)
				cout<<"YES ";
			else
				cout<<"NO";
		}
		cout<<"\n";
	}
	return 0;
}