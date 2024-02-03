#include <iostream>
using namespace std;
void (*signal (int sig, void (*func)(int)))(int);  
int main() {
    int t,n,N,M;
    
    cin>>n;
    for(t=0;t<n;t++){
        cin>>N>>M;
        int a[N];
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        int h=0;
        int b=0;
        for(int j=0;j<N;j++){
            if(a[j]<=(M/2)){
                h=h+abs(a[j]-M);
            }
            else{
                b=b+abs(a[j]-1);
            }
        }
        cout<<h+b<<endl;
    }
    return 0;
}