#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int m,k,a,b;
        cin>>m>>k>>a>>b;
        int q= a+k*b;
        if(q>=m){
            int x=0;
            cout<<x<<endl;
        }
        else{
            if((m-q)<k){
                int h=1;
                cout<<h<<endl;
            }
            else{
                int z=m/k;
                int x=m%k;
                int j =z+x;
                cout<<j<<endl; 
            }
        }
    }
}