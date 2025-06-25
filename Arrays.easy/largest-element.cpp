#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largest = nums[0];
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > largest) {
                largest = nums[i];
            }
        }
        return largest;
    }
};

int main() {
    vector<int> nums = {3, 3, 0, 99, -40};
    Solution sol;
    int result = sol.largestElement(nums);
    cout << "The largest element is: " << result << endl;

    return 0;
}



//  bug fixes