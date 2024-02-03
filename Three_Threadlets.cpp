#include<iostream>
using namespace std;

int min(int x,int y,int z){
    if(x<=y && x<=z){
        return x;
    }
    else if(y<=z && y<=x){
        return y;
    }
    else{
        return z;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,c,p,q,r;
        cin>>a>>b>>c;
        int mini=min(a,b,c);
        if(a%mini==0 && b%mini==0 && c%mini==0){
            p=a/mini -1;
            q=b/mini -1;
            r=c/mini -1;
            if(p+q+r<=3){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}