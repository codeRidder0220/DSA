/*
Problem : Move Zeroes
LeetCode : 283

Approach :
Two Pointer

Time Complexity : O(n)

Space Complexity : O(1)
*/



#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return;
    }
};