#include <iostream>
#include <string>
using namespace std;
int main(){
int t;
cin >> t;
for(int i=0;i<t;i++){
    string s;
    cin >> s;
    int n = s.length();
    string a = string(n, '(') + string(n, ')');
    string b = "";
    int y = n;
    while (y--){
        b += "()";
    }

    if (a.find(s) == string::npos){
        cout << "YES" << endl;
        cout << a << endl;
    }

    else if (b.find(s) == string::npos){
        cout << "YES" << endl;
        cout << b << endl;
    }

    else{
        cout << "NO" << endl;
    }
   
}
}