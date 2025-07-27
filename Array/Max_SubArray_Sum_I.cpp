#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> v;                      //Brute force solution

    int currSum = 0;
    int maxSum = INT32_MIN;

    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < v.size(); i++)
    {
        int start = i;
        for (int j = i; j < v.size(); j++)
        {
            int end = j;
            currSum = 0;
            for (int k = start; k <= end; k++)
            {
                // subarray sum
                currSum += v[k];
            }
            if (maxSum < currSum)
            {
                maxSum = currSum;
            }
        }
    }
    cout << "Max sum = " << maxSum << endl;
}