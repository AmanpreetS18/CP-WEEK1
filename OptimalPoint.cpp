using namespace std;
#include<bits/stdc++.h>
int main(){
int n;
cin>>n;
vector<int> arr;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int point=INT_MAX;
int dis=INT_MAX;
for(int i=0;i<n;i++){
        int p=arr[i];
        int d=0;
    for(int j=0;j<n;j++){
        d+=abs(p-arr[j]);
    }
    if(d<dis)
    {

         point=min(point,p);
    }

}
cout<<point;
return 0;
}
