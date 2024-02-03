#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];bfd
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sum=0;
        for(int k=0;k<n;k++){
            sum+=arr[k];
        }
        if(sum%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}