#include <iostream>
using namespace std;



int main() {
    int t;
    cin >> t; 

    while (t--) {
        long long n,k;
        cin>>n>>k;
        long long temp=k/2;
        cout<<n*temp<<endl;
    }
}
