#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--)
    {
        string s;
        ll i,j,k=0;
        cin>>s;
        if(s.size() <= 20)
        {
            cout<<"1 "<<s.size()<<"\n";
            cout<<s;
            return 0;
        }
        ll row=ceil(s.size()/20.0);
        ll col=ceil(1.0*s.size()/row);
        if(s.size()%row == 0)
        {
            cout<<row<<" "<<col<<"\n";
            for(i=0;i<row;i++)
            {
                for(j=0;j<col;j++)
                    cout<<s[k++];
                cout<<"\n";
            }
            return 0;
        }
        k=0;
        ll star=col*row-s.size();
        ll f=1;
        cout<<row<<" "<<col<<"\n";
        for(i=0;i<row;i++)
        {
            for(j=0;j<col-f;j++)
                cout<<s[k++];
            if(f)
            {
                cout<<"*";
                star--;
            }
            if(!star) f=0;
            cout<<"\n";
        }
    }
    return 0;
}