#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t,n,N,k;
    cin>>n;
    for(t=0;t<n;t++){
        cin>>N>>k;
        int h=N/k;
        cout<<h*h<<endl;
    }
}
