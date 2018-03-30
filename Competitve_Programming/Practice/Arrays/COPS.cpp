#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,x,y,i,z,j,c=0;
		cin>>m>>x>>y;
		int a[105];
		memset(a,0,sizeof(a));
		for(i=0;i<m;i++)
		{
			cin>>z;
			a[z]=1;
			if(z < x*y)
				for(j=1;j<z;j++)
					a[j]=1;
			else
				for(j=z-1;j>=z-(x*y);j--)
					a[j]=1;
			if(100-z < x*y)
				for(j=z+1;j<=100;j++)
					a[j]=1;
			else
				for(j=z+1;j<=(x*y)+z;j++)
					a[j]=1;
		}
		for(i=1;i<=100;i++)
			if(a[i] != 1)
				c++;
		cout<<c<<"\n";

	}
	return 0;
}