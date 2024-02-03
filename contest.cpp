#include <iostream>
using namespace std;

int main()
{
	int t, n, N;
	cin >> n;
	for (t = 0; t < n; t++)
	{
		cin >> N;
		string s;
		// for(int i=0;i<N;i++){
		//     cin>>s[i];
		// }
		cin >> s;
		int count = 0;
		for (int j = 0; j < N; j++)
		{
			if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
			{
				count = 0;
			}
			else
			{
				count = count + 1;
			}
			if (count = 4)
			{
				break;
			}
		}
		if (count >= 4)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}
	}
}