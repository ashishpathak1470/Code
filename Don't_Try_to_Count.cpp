#include <iostream>
#include <string>

using namespace std;

void sub(string s, string x) {
    int c = 0;
    while (x.size() <= 1000) {
        if (x.find(s) == string::npos) {
            x += x;
            c++;
        } else {
            cout << c <<endl;
            return;
        }
    }
    cout << -1 <<endl;
}

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++) {
        int n, m;
        cin>>n>>m;
        string x, s;
        cin>>x>>s;
        sub(s, x);
    }

    return 0;
}