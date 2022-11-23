//LightOj_shadow_sum_(1447).cpp
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
typedef long long ll;
int k=0;
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}
void solve()
{
    long long n;
    cin>>n;
    map<int,bool>mp;
    //initially map consist of zero by default .. ..
    long long a[n+10]={0};
    long long count=0,i,j,sum=0,flag=0,x=0,y=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        //mp[a[i]]++;
    }
    reverse(a,a+n);
    for(i=0; i<n; i++)
    {
        x=a[i];
        y=abs(a[i]);
        if(mp[y]==false)
        {
            sum+=x;
            mp[y]=true;
        }
    }
    cout<<"Case "<<k<<": "<<sum<<endl;

}
void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        k++;
        solve();
    }

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     test();
    //solve();
}
/*
Input	Output
3
7
5 -5 8 2 -5 9 8
2
1 2
8
1 -1 -1 1 -1 1 8 1

Case 1: 14
Case 2: 3
Case 3: 9
*/
