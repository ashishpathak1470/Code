#include <iostream>
using namespace std;

int sum (int n,int s=1,int summ=1){
    summ = summ * s;
    s++;
    if(s==n){
        summ = summ * s;
        cout<<summ;
    }
    sum(n,s,summ);
}
int main (){
    int n;
    cin >> n;
    sum(n);
}