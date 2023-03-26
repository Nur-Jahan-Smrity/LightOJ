//LOJ_1088_POints in segment ..
//lower bound & upper bound used ..
#include<bits/stdc++.h>

#define all(qz) qz.begin(),qz.end()
#define rall(qz) qz.rbegin(),qz.rend()
#define pi (3.141592653589)
// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
int j=0;
void solve()
{
    long long n,i,j,count=0,k;

    cin>>n>>k;
    ll a[n+10]= {0};

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll range1,range2;
    for(i=0; i<k; i++)
    {
        cin>>range1>>range2;
        cout<<(upper_bound(a,a+n,range2)-a)-(lower_bound(a,a+n,range1)-a)<<endl;
    }

}
void test()
{
    long long t;
    //cout<<"test case : "<<endl;
    cin>>t;

    while(t--)
    {
        j++;
        cout<<"Case "<<j<<":"<<endl;
        solve();
    }

}

int main()
{
    //int n = sizeof(arr) / sizeof(arr[0]);
    test();
    //solve();
}
/*
Input
1
5 3
1 4 6 8 10
0 5
6 10
7 100000

Output
Case 1:
2
3
2
*/
