#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int> &nums, int start, int end) {
        int mid = start + (end - start) / 2;
        int len1 = mid - start + 1;
        int len2 = end - mid;
        int* first = new int[len1];
        int* second = new int[len2];

        int mainarrayindex = start;
        for (int i = 0; i < len1; i++) {
            first[i] = nums[mainarrayindex++];
        }
        int k = mid + 1;
        for (int i = 0; i < len2; i++) {
            second[i] = nums[k++];
        }
        int index1 = 0;
        int index2 = 0;
        mainarrayindex = start;
        while (index1 < len1 && index2 < len2) {
            if (first[index1] < second[index2]) {
                nums[mainarrayindex++] = first[index1++];
            } else {
                nums[mainarrayindex++] = second[index2++];
            }
        }

        while (index1 < len1) {
            nums[mainarrayindex++] = first[index1++];
        }
        while (index2 < len2) {
            nums[mainarrayindex++] = second[index2++];
        }

    }
    void mergesort(vector<int>& nums, int start, int end) {
        if (start >= end) {
            return;
        }
        int mid = start + (end - start) / 2;
        mergesort(nums, start, mid);
        mergesort(nums, mid + 1, end);
        merge(nums, start, end);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums, 0, nums.size() - 1);

        return nums;
    }
};
