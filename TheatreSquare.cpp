using namespace std;
#include<bits/stdc++.h>
int gcd(int a, int b)
{

    if (a == 0)
        return b;
    if (b == 0)
        return a;


    if (a == b)
        return a;


    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}
int main(){
    int n,m,a;
    cin>>n;
    cin>>m;
    cin>>a;

    int noOfFlagStones=gcd(n*m,a*a);

    cout<<noOfFlagStones;
    return 0;

}
