//LOJ_Division by 3_1136.cpp
#include<bits/stdc++.h>
using namespace std;
int divisible(int n) {
    if (n==0)
        return 0;
    int ans = (n / 3) * 2;
    if (n % 3 == 2)
        ans=ans+1;
    return ans;
}
int main()
{
    int t, cases = 1, a, b;
    scanf("%d", &t);
    while (t--) {
        cin>>a>>b;
        printf("Case %d: %d\n", cases++ , divisible(b) - divisible(a - 1));
    }
    return 0;
}
