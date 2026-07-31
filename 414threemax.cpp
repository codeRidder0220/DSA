#include <iostream>
#include <vector>
#include <climits>
using namespace std;


class Solution {
public:
    int thirdMax(vector<int>& nums) {

        long long first = LONG_MIN;
        long long sec = LONG_MIN;
        long long third = LONG_MIN;

        for(int num : nums){
            if(num==first||num==sec||num==third) continue;

            if(num>first){
                third = sec;
                sec = first;
                first = num;
            }else if(num>sec){
                third = sec;
                sec = num;
            }else if(num>third){
                third = num;
            }

        }

        if(third == LONG_MIN){
            return first;
        }


       return third;
        
    }
};

/*
The problem asks for the third distinct maximum element
not the third element after sorting. 
Since only the top three distinct values are required
sorting the entire array is unnecessary.

Instead, while traversing the array once, we can continuously maintain the largest, second largest, and third largest 
distinct elements seen so far.

Whenever a new element is encountered
it is compared with these three values and placed in the appropriate position by shifting the existing values if necessary. 
Duplicate values are ignored because only distinct maximums are considered.

This eliminates the need for sorting and allows us to solve the problem in a single pass.




Complexity
Time Complexity: O(n) — Single traversal of the array.
Space Complexity: O(1) — Only three variables are used.


*/