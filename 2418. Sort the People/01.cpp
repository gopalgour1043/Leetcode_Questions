#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {

        int size = heights.size();
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size - 1; j++)
            {
                if (heights[j] < heights[j + 1])
                {
                    swap(heights[j], heights[j + 1]);
                    swap(names[j], names[j + 1]);
                }
            }
        }
        return names;
    }
};

