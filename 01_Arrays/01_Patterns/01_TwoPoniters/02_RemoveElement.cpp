// Remove Element

// This is another classic Two Pointer (Slow–Fast Pointer) problem.

// Problem

// Given an integer array nums and an integer val, remove all occurrences of val in-place.

// Return the number of elements that are not equal to val.

// The order of the remaining elements doesn't matter.

// Example 1
// nums = [3,2,2,3]
// val = 3

// Output:

// k = 2

// nums = [2,2,_,_]
// Example 2
// nums = [0,1,2,2,3,0,4,2]
// val = 2

// Output:

// k = 5

// nums = [0,1,3,0,4,_,_,_]

#include <iostream>
#include <vector>
using namespace std;

int removeElements(vector<int> &nums, int val)
{

    int left = 0;

    for (int right = 0; right < nums.size(); right++)
    {

        if (nums[right] != val)
        {
            nums[left++] = nums[right];
        }
    }

    return left;
}

int main()
{

    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int res = removeElements(nums, 3);

    cout << res << endl;

    for (int num : nums)
    {
        cout << num << " ";
    }

    return 0;
}
