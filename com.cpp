#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>n;
	for(t=0;t<n;t++){
        double x,y;
	    cin>>x>>y;
	    double h=(y/x);
	    if(h>=0.5){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	}
}
}
