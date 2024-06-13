using namespace std;
#include<bits/stdc++.h>
bool check(int ele){

if(ele%3==0 || ele%7==0){
    return true;
}
           for(int j=1;j<=ele;j++){
            if(((j%3==0) && ((ele-j)%7==0))
               || ((j%7==0) && ((ele-j)%3==0))
               || ((j%7==0) && ((ele-j)%7==0))
               ||  ((j%3==0) && ((ele-j)%3==0)))
        {
            return true;
       }
           }
           return false;

}
int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    bool ans=false;
     for(int i=0;i<n;i++){
            if(check(arr[i])) {
                cout<<"YES\n";
            }
            else{
            cout<<"NO\n";
            }

       }


return 0;

}
