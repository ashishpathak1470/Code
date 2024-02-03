#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool areSame(int a[],int N)
{
    unordered_map<int,int> m;
     
    for(int i=0;i<N;i++)
       m[a[i]]++;
      
    if(m.size()==1)
       return true;
    else
       return false;
}

int main() {
    int t,n,N;
    int a[N];
    cin>>n;
    for(t=0;t<n;t++){
        cin>>N;
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        if(areSame(a,N)){
            cout<<N-N<<endl;
        }
        else{

        }
        
    }

	return 0;
}
