#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        int n = nums.size();
        for(int i=0; i<n;i++){
            if(nums[i]>=nums[(i+1)%n]){
                count++;
            }
        }
        return count <= 1;
    }

    bool checkSorted(vector<int>& nums) {
        for(int i=0; i<nums.size();i++){
            if(nums[i]>=nums[i+1]){

            } else 
            return false;
        }
        return true;
    }
};

int main() {
    Solution sol;
    vector<int> arr1 = {3, 4, 5, 1, 2}; 
    vector<int> arr2 = {1, 2, 3, 4, 5}; 
    vector<int> arr3 = {2, 1, 3, 4, 5}; 

    cout << "arr1 is sorted and rotated? " << (sol.check(arr1) ? "Yes" : "No") << endl;
    cout << "arr1 is sorted? " << (sol.checkSorted(arr1) ? "Yes" : "No") << endl;

    cout << "arr2 is sorted and rotated? " << (sol.check(arr2) ? "Yes" : "No") << endl;
    cout << "arr2 is sorted? " << (sol.checkSorted(arr2) ? "Yes" : "No") << endl;

    cout << "arr3 is sorted and rotated? " << (sol.check(arr3) ? "Yes" : "No") << endl;
    cout << "arr3 is sorted? " << (sol.checkSorted(arr3) ? "Yes" : "No") << endl;

    return 0;
}