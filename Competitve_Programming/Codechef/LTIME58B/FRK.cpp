#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	int n,i,j,c=0;
	cin>>n;
	string s[n];
	for(i=0;i<n;i++)
		cin>>s[i];
	for(i=0;i<n;i++)
	{
		int f=0;
		for(j=0;j<s[i].size()-1;j++)
		{
			if(s[i][j]=='c' && s[i][j+1]=='h')
			{
				f=1;
				break;
			}
			else if(s[i][j]=='h' && s[i][j+1]=='e')
			{
				f=1;
				break;
			}
			else if(s[i][j]=='e' && s[i][j+1]=='f')
			{
				f=1;
				break;
			}
		}
		if(f==1)
			c++;
	}
	cout<<c<<"\n";
	return 0;
}