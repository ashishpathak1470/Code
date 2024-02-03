#include<iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
       const char* str = s.c_str();
        vector<int> v;
        v.push_back(atoi(str));
 
        for(int k=v.size()-2;k>=0;--k){
            if(v[k]>=5){
                v[k+1]=v[k+1]+1;
                v[k]=0;
            }
            else{
                v[k]=0;
            }
        }
        for (auto val : v) {
        cout << val << endl;
    }
    }

}