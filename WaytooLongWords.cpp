using namespace std;
#include<bits/stdc++.h>
int main(){
     int n;
     cin>>n;
     string arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     vector<string> ans;
     for(auto str:arr){
        int len=str.length();
        if(len>10){
            string temp;
            temp+=str[0];
            temp+=to_string(len-2);
            temp+=str[len-1];
            ans.push_back(temp);
        }else{
             ans.push_back(str);
        }
     }
     for(auto word:ans){
        cout<<word<<endl;
     }
     return 0;
}
