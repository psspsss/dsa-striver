#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=i;j < nums.size();j++){
            if(nums[j] != nums[i]){
                nums[i+1]= nums[j];
                i++;
            }
        }
        return i+1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
    int newLength = sol.removeDuplicates(nums);

    cout << "Array after removing duplicates: ";
    for(int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    cout << "New length: " << newLength << endl;

    return 0;
}