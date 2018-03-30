#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j,f=1;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		int z=1;
		i=0,j=n-1;
		while(z<7)
		{
			if(a[i]!=z || a[j]!=z)
			{
				f=0;
				break;
			}
			int k=0,l=0;
			while(i < n && a[i] == z)
				k++,i++;
			while(j >= 0 && a[j] == z)
				l++,j--;
			if(k != l)
			{
				f=0;
				break;
			}
			z++;
		}
		if(z == 7 && i <= j)
		{
			for(int y=i;y<=j;y++)
				if(a[y] != 7)
					f=0;
		}
		else
			f=0;
		if(f)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
	return 0;
}