// Given a sorted array nums, remove the duplicates in-place such that each unique element appears only once.

// Return the number of unique elements k.

// The first k elements of nums should contain the unique elements.

// Example
// nums = [1,1,2]

// Output:

// k = 2

// nums = [1,2,_]

// (The value after index k-1 doesn't matter.)

// Another example:

// nums = [0,0,1,1,1,2,2,3,3,4]

// Output:

// k = 5

// nums = [0,1,2,3,4,_,_,_,_,_]

#include<iostream>
#include<vector>
using namespace std;

int uniqueCount(vector <int>& nums) {
    int k = 0;
    int left = 0;
    int right = 1;

    //1-Using While Loop
    // while(right < nums.size()) {

    //     if(nums[left] == nums[right]) {
    //         right++;
    //     }

    //     if(nums[left] != nums[right]) {
    //         swap(nums[++left], nums[right++]);
    //     }
    // }

    for(int right = 1; right < nums.size(); right++) {

        if(nums[left] != nums[right])
            nums[++left] = nums[right]; 
    }

    return left + 1;

}

int main() {

    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int res = uniqueCount(nums);

    cout<<res<<endl;

    for(int num : nums) {
        cout<<num<<" ";
    }

    return 0;
}