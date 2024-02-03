#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    int c=0;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(a[i]!=a[j]){
                c=c+1;
            }
        }
    }
    cout<<c<<endl;
}