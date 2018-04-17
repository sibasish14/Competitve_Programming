#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i;
		string s;
		cin>>s;
		for(i=s.size()-1;i>=0;)
		{
			if(i<3 && s[i]=='?')
			{
			    s[i]='A';
			    i--;
			}
			else if((s[i]=='?' || s[i]=='F') && (s[i-1]=='?' || s[i-1]=='E') && (s[i-2]=='?' || s[i-2]=='H') && (s[i-3]=='?' || s[i-3]=='C'))
			{
				s[i]='F';
				s[i-1]='E';
				s[i-2]='H';
				s[i-3]='C';
				i-=4;
			}
			else if(s[i]=='?')
			{
			    s[i]='A';
			    i--;
			}
			else
			    i--;
		}
		cout<<s<<"\n";		
	}	
	return 0;
} 