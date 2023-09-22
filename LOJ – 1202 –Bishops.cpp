//LOJ – 1202 –Bishops.cpp
#include<bits/stdc++.h>
// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
int j=0;

void solve()
{
    long long x1,y1,x2,y2,i;
    cin>>x1>>y1>>x2>>y2;
    ll a=abs(x1-x2);
    ll b=abs(y1-y2);
    if(a==b)
    {
         printf("Case %d: 1\n", j );
    }
    else
    {
        ll c=a%2;
        ll d=b%2;
        if(c==d)
        {
            printf("Case %d: 2\n", j );
        }
        else
        {
             printf("Case %d: impossible\n", j );
        }
    }

}
void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        j++;
        solve();
    }

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int n = sizeof(arr) / sizeof(arr[0]);
    test();
    //solve();
}
/*
3
1 1 10 10
1 1 10 11
1 1 5 3

Case 1: 1
Case 2: impossible
Case 3: 2

*/
