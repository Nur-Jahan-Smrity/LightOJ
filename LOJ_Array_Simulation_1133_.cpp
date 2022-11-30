//LOJ_Array_Simulation_1133_.cpp
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
#define nl "\n"
#define all(qz) qz.begin(),qz.end()
#define rall(qz) reverse(qz.begin(),qz.end())
#define debug(x) cout<<#x<<" = "<<x<<nl;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define pi (3.141592653589)
#define setafter fixed << setprecision
#define NO             cout << "NO" << endl;
#define Yes            cout << "Yes" << endl;
#define No             cout << "No" << endl;
#define yes            cout << "yes" << endl;
#define no             cout << "no" << endl;
#define YES            cout << "YES" << endl;
// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
int j=0;
ll Pow(ll c, ll d)
{
    return d == 0 ? 1 : c * pow(c, d - 1);
}
ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return ((a * b) / gcd(a, b));
}
void fillPrefixSum(ll arr[], ll n, ll prefixSum[])
{
    prefixSum[0] = arr[0];
    // Adding present element with previous element
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
}
void solve()
{
    long long n,i,k,b,count=0;
    cin>>n>>b;

    ll a[n+10]= {0};

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<b; i++)
    {
        ll c,d;
        char ch;
        cin>>ch;
        if(ch=='P')
        {
            cin>>c>>d;
            swap(a[c],a[d]);
        }
        else if(ch=='R')
        {
            reverse(a,a+n);
            //continue;
        }
        else if(ch=='S')
        {
            cin>>c;

            for(k=0; k<n; k++)
            {
                a[k]+=c;
            }

        }
        else if (ch=='M')
        {


            cin>>c;
            for(k=0; k<n; k++)
            {
                a[k]*=c;
            }
        }
        else if(ch=='D')
        {
            cin>>c;
            for(k=0; k<n; k++)
            {
                a[k]/=c;
            }
        }

    }


    //   cout<<setafter(2)<<endl;
    cout<<"Case "<<j<<":"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;


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
/*
Bitwise Operators in C/C++
  & (bitwise AND)
  | (bitwise OR)
  ^ (bitwise XOR)
  << (left shift)
  >> (right shift)
  ~ (bitwise NOT)
*/
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int n = sizeof(arr) / sizeof(arr[0]);
    test();
    //solve();
}
/*
Sample

Input	Output
2
5 3
1 2 3 4 5
P 0 1
S 1
R
4 2
2 7 8 1
M 10
D 5

Case 1:
6 5 4 2 3
Case 2:
4 14 16 2
*/
