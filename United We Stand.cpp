#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int maxx=*max_element(arr,arr+n);
        vector<int> b,c;
        
        for(int a=0;a<n;a++){

            if(maxx==arr[a]){
                c.push_back(arr[a]);
            }
            else{
                b.push_back(arr[a]);
            }
        }
        if(b.size()==0){
            cout<<"-1"<<endl;
        }
        else{
        cout<<b.size()<<" "<<c.size()<<endl;

        for(int w=0;w<b.size();w++){
            cout<<b[w]<<" ";
        }
        cout<<"\n";
        for(int g=0;g<c.size();g++){
            cout<<c[g]<< " ";
        }
        }
    }
 }