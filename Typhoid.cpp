using namespace std;
#include<bits/stdc++.h>
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> temp;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            temp.push_back(arr[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0) temp.push_back(arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0) temp.push_back(arr[i]);
    }
    int i=0;

    int cnt=0;
    while(i<n){
            if(arr[i]==0 || temp[i]==0){
                cnt++;
            }
        else if(arr[i]!=temp[i]){
            cnt++;
        }
        i++;
    }
    cout<<cnt/2;
    return 0;
}
