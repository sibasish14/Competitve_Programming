#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int a[n],b[n],mxa=0,mxb=0,suma=0,sumb=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			mxa=max(mxa,a[i]);
			suma+=a[i];
		}
		suma-=mxa;
		for(i=0;i<n;i++)
		{
			cin>>b[i];
			mxb=max(mxb,b[i]);
			sumb+=b[i];
		}
		sumb-=mxb;
		if(suma > sumb)
			cout<<"Bob\n";
		else if(sumb > suma)
			cout<<"Alice\n";
		else
			cout<<"Draw\n";
	}
	return 0;
}