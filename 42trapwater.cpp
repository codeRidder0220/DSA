#include <iostream>
#include <vector>
using namespace std;

// LeetCode 42 =>> Trapping Rain Water

// Use two pointers:
// `left` starts from the beginning.
// `right` starts from the end.
// Maintain:
// `leftMax` = highest bar seen from the left.
// `rightMax` = highest bar seen from the right.
// If `height[left] < height[right]`, process the left side.
// Otherwise, process the right side.
// Add trapped water at each step.

class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;

        int lm =0;
        int rm =0;

        int add = 0;

        while(l<r){

            if(height[l]<height[r]){    
                lm = max(lm,height[l]);
                add+= lm-height[l];
                l++;
            }
            else if(height[l]>height[r]){
                rm = max(rm,height[r]);
                add+= rm-height[r];
                r--;
            }
            else{
                rm = max(rm,height[r]);
                add+= rm-height[r];
                r--;
            }

        }
        return add;
    }
};

int main(){

    // Time Complexity => O(n)
    // space complexity => O(1)


    return 0;
}