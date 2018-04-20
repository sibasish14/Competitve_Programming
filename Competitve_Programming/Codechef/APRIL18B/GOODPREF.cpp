#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		ll n,i,j,a=0,b=0,ans=0,tmp=0,tmp1=0,tmp2=0,f=0,x=0,y=0;
		cin>>s>>n;
 
		for(i=0;i<n;i++)
		{
			tmp1=0,tmp2=0;
			for(j=0;j<s.size();j++)
			{
				if(s[j] == 'a')
					a++;
				else if(s[j] == 'b')
					b++;
				if((a > b) && (i%2 == 0))
					tmp1++;
				else if((a > b) && (i%2 == 1))
					tmp2++;
			}
			if(tmp1!=0)
				x=tmp1;
			if(tmp2!=0)
				y=tmp2;
			ans+=(tmp1+tmp2);
 
			if(tmp1==0 && tmp2==0)
				break;
			if(x == y)
			{
				if(tmp1!=0)
					tmp=tmp1;
				else
					tmp=tmp2;
				f=1;
				break;
			}
		}
		if(f)
			cout<<(ans + (n-i-1)*tmp)<<"\n";
		else
			cout<<ans<<"\n";
	}
	return 0;
} 