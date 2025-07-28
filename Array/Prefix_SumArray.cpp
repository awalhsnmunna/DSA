#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;                           //  prefix[i] = prefix[i - 1] + v[i];

    int v[size];
    int prefix[size];                  //  currSum = start == 0 ? prefix[end] : prefix[end] - prefix[start - 1];

    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    prefix[0] = v[0];
    int currSum = 0;
    int maxSum = INT32_MIN;

    // calculate prefix array
    for (int i = 1; i < size; i++)
    {
        prefix[i] = prefix[i - 1] + v[i];
    }

    for (int i = 0; i < size; i++)
    {
        int start = i;
        for (int j = i; j < size; j++)
        {
            int end = j;

            currSum = start == 0 ? prefix[end] : prefix[end] - prefix[start - 1];

            if (maxSum < currSum)
            {
                maxSum = currSum;
            }
        }
    }
    cout << "Max sum = " << maxSum << endl;

    return 0;
}