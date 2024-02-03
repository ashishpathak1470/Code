#include <iostream>
#include <vector>
using namespace std;
int main()
{
int t;
cin >> t;
for(int i=0;i<t;i++){
    int n;
    cin >> n;
    vector<int> gcd(n + 1, 0);
    cout << 1 << " ";
    for (int i = 2; i <= n; i++){
        int current = i;
        while (current <= n && !gcd[current]){
            cout << current << " ";
            gcd[current] = 1;
            current *= 2;
        }
    }
    cout << endl;
}

return 0;
}