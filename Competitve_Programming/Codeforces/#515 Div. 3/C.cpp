#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

ll before[200010],after[200010];
char query[200010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll q,l=0,r=0;
    cin>>q;
    while(q--)
    {
        char ch;
        ll id;
        cin>>ch>>id;
        if(ch == '?')
        {
            if(query[id] == 'L')
                cout<<min(l-before[id],r+after[id])<<"\n";
            else cout<<min(l+before[id],r-after[id])<<"\n";
        }
        else if(ch == 'L')
        {
            l++;
            before[id]=l;
            after[id]=l-1;
            query[id]='L';
        }
        else
        {
            r++;
            before[id]=r-1;
            after[id]=r;
            query[id]='R';
        }
    }
    return 0;
}