
#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b,x,i;
    cin>>a>>b>>x;
    int y=x/2;
    if(x%2 == 0)
    {
        if(a >= b)
        {
            for(i=0;i<y;i++)
                cout<<"01";
            for(i=0;i<b-y;i++)
                cout<<"1";
            for(i=0;i<a-y;i++)
                cout<<"0";
        }
        else
        {
            for(i=0;i<y;i++)
                cout<<"10";
            for(i=0;i<a-y;i++)
                cout<<"0";
            for(i=0;i<b-y;i++)
                cout<<"1";
        }
    }
    else
    {
        for(i=0;i<b-y-1;i++)
            cout<<"1";
        for(i=0;i<=y;i++)
            cout<<"10";
        for(i=0;i<a-y-1;i++)
            cout<<"0";
    }
	return 0;
}
