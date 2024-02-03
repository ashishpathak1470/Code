#include <iostream>
using namespace std;

int rev(int n, int arr[], int i)
{
    if (i < 0)
    {
        return arr[i];
    }
    cout << arr[i];
    i--;
    rev(n,arr,i);
}

int main()
{
    int n =5;
    int arr[5];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        cout << arr[j];
    }
    cout<<endl;
    cout << "reversed array"<<endl;
    rev(5,arr,4);
}
