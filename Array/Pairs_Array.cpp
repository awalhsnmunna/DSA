#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            cout << "(" << arr[i] << "," << arr[j] << ") ";
        }
        cout << endl;
    }
    return 0;
}