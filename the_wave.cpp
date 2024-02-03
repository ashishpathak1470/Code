#include <iostream>
using namespace std;

int main(){
    int N,Q;
    cin>>N>>Q;
    for(int t=0;t<Q;t++){
        int a[N],x,m=1;
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        cin>>x;
        for(int j=0;j<N;j++){
            m=m*(x-a[j]);
        }
        if(m>0){
            cout<<"positive"<<endl;
        }
        else if(m<0){
            cout<<"negative"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
}