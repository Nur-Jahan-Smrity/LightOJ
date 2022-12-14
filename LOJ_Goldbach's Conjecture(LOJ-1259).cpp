//E - Goldbach's Conjecture LightOJ - 1259
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
typedef long long int ll;
int prime[3000000] , nPrime;
int mark[10000002];
int st=0;
void sieve(int n)
{
    //mark=1 (not prime) ..
    //mark=0  (prime) ..
    int i , j , limit = sqrt(n * 1.) + 2;
    mark[1] = 1;
    mark[2] = 0; //by default zero ache.. na dileo cholbe ..
    for(int i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;

    for(i = 3; i <= n; i++)
    {
        if(!mark[i])
        {
            prime[nPrime++] = i;
            if(i <= limit)
            {
                for(j = i * i; j <= n; j+= i * 2)
                {
                    mark[j] = 1;
                }
            }
        }
    }
}
void solve()
{
   ll sum=0,p=0,q=0,r=0;
   ll a,b,c,n,t,i;
   //sieve(10000009);
   cin>>n;


         ll count=0;
       //sieve(n);
       //if we add two odd prime number we will always get a even number ..
             for(i=2;i<=n/2;i++)
             {
                if(mark[i]==0 && mark[n-i]==0)
                {
                    count++;
                }
             }
             //Case 1: 1
             cout<<"Case "<<st<<": "<<count<<endl;

}
void test()
{
    long long t;
    cin>>t;
     sieve(10000009);
    while(t--)
    {
    st++;
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
