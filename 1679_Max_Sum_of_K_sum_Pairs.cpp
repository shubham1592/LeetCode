/*
**Time Complexity = O(N longN)**

Algorithm Followed :-
1. Keep two pointers, one at the front and one at the end of the array given
2. start a while loop with the condition front<end (as if front>=end it will overflow the floop)
3. check if the sum of elements at these pointers equals the given sum, k
4. if the sum equals k, then move the front pointer forward, end pointer backward, and increment the result counter by 1
5. if the sum is less than k, increase the front pointer forward
6. if the sum is greater than k, decrease the end pointer backward
7. return the result counter as the final answer
*/

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
          sort(nums.begin(), nums.end());       //sort the elements int the vector to make it usable for two pointer approach
          int result = 0;                       //initialize the result integer with 0
          int front=0, end=nums.size()-1;       //initialize two pointers pointing at the front and end of the array 
          while(front<end){
            if(nums[front]+nums[end] == k){     //if the element is suitable i.e. sum == k then increase the result
                result++;    //increment result
                front++;     //increment the front pointer to the next element
                end--;       //decrement the end pointer to the next element from backward dirrection
            } 

            else if(nums[front] + nums[end] > k){
                end--;       //if the sum is greater than required then reduce the end pointer to the next element from backward
            }

            else{
                front++;     //if the sum is smaller than required then increas the front pointer to the next element from front
            }    
          }
          return result;     //return the result count as the final answer
    }
};
