#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,i,j,k;
	string s;
	cin>>n>>s;
	for(i=1;i<=n;i++)
	{
		if(n%i == 0)
		{
			j=0,k=i-1;
			while(j<k)
			{
				char c=s[j];
				s[j]=s[k];
				s[k]=c;
				k--;
				j++;
			}
		}
	}
	cout<<s;
	return 0;
}
