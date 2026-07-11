// Write a function that reverses a string. The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.

// Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]
// Example 2:

// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]

// Constraints:

// 1 <= s.length <= 105
// s[i] is a printable ascii character.

#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<int> &nums)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left < right)
    {
        swap(nums[left++], nums[right--]);
        
    }
}

int main()
{
    vector<int> nums = {1, 5, 4, 6, 3};
  
    reverseString(nums);
    for (int num : nums)
    {
        cout << num << " ";
    }


    return 0;
}
