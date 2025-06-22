#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest= nums[0];
        int secondLargest= INT_MIN;
        for(int i=0; i < nums.size();i++){   
            if(nums[i]>largest){
                secondLargest = largest;
                largest = nums[i];
            } else if(nums[i]< largest && nums[i]> secondLargest){
                secondLargest = nums[i];
            }
        }

        if (secondLargest == INT_MIN)
            return -1;

        return secondLargest;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {8, 8, 7, 6, 5};      
    vector<int> nums2 = {10, 10, 10, 10};     
    vector<int> nums3 = {3, 5, 1, 2};         
    vector<int> nums4 = {-2, -3, -1, -4};     
    vector<int> nums5 = {100};                

    cout << "Second largest in nums1: " << sol.secondLargestElement(nums1) << endl;
    cout << "Second largest in nums2: " << sol.secondLargestElement(nums2) << endl;
    cout << "Second largest in nums3: " << sol.secondLargestElement(nums3) << endl;
    cout << "Second largest in nums4: " << sol.secondLargestElement(nums4) << endl;
    cout << "Second largest in nums5: " << sol.secondLargestElement(nums5) << endl;

    return 0;
}
