#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

int main(){
IOS
int g[5][5];
for(int i=0;i<5;++i){
for(int j=0;j<5;++j){
cin>>g[i][j];
}
}
int ans=0;
vector<int> a={0,1,2,3,4};
vector<int> b=a;
while(1){
int res=0;
// 01234
res+=g[a[0]][a[1]]+g[a[1]][a[0]]+g[a[2]][a[3]]+g[a[3]][a[2]];
// 1234
res+=g[a[1]][a[2]]+g[a[2]][a[1]]+g[a[3]][a[4]]+g[a[4]][a[3]];
// 234
res+=g[a[2]][a[3]]+g[a[3]][a[2]];
// 34
res+=g[a[3]][a[4]]+g[a[4]][a[3]];
ans=max(ans,res);
next_permutation(a.begin(),a.end());
if(a==b){
break;
}
}
cout<<ans;
return 0;
}
