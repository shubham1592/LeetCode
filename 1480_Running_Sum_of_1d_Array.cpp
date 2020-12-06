/*
    
    Algorithm followed :-

    Declare an integer variable "sum" and initialize it to zero.
    Traverse through the given array and add its elements to "sum".
    Update the value at that index to be equal to "sum".
    return the final array "nums".

*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;          //this variable will store the running sum
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];   //calculating the summation of each trailing element
            nums[i] = sum;    //updating the value at index "i" to be equal to "sum"
        }
        return nums;          //return the final array "nums"
    }
};
