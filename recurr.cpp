#include<iostream>
using namespace std;

int arr(int n,int count){
    if(count>0){
        return n;
    }
    count--;
    cout<<count;
    arr(n,count=n);
}

int main(){
    int n;
    cin>>n;
    arr(n);
}