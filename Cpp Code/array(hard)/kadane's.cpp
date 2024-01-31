#include <iostream>
#include<climits>
#include <vector>

using namespace std;

pair<int, pair<int, int>> findMaxSubarraySum(const vector<int>& nums) {
    int n = nums.size();
    int maxSum = INT_MIN;
    int currentSum = 0;
    int start = 0, end = 0;
    int tempStart = 0;

    for (int i = 0; i < n; ++i) {
        currentSum += nums[i];

        if (currentSum > maxSum) {
            maxSum = currentSum;
            start = tempStart;
            end = i;
        }

        if (currentSum < 0) {
            currentSum = 0;
            tempStart = i + 1;
        }
    }

    return {maxSum, {start, end}};
}

int main() {
    vector<int> nums = {1, -2, 3, -4, 5, -1, 2};
    pair<int, pair<int, int>> result = findMaxSubarraySum(nums);

    int maxSum = result.first;
    int start = result.second.first;
    int end = result.second.second;

    cout << "Maximum subarray sum: " << maxSum << endl;
    cout << "Subarray indices: [" << start << ", " << end << "]" << endl;

    return 0;
}
