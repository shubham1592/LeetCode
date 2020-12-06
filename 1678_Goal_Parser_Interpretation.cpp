//**Time Complexity = O(N)**

/* Algorithm Followed:
1. get each element into the test array one by one
2. check if the element in test array equals to the conditions given in question
3. add the element to thr result array if it satisfies the condition
4. make required changes to replace the string before adding it to the result array
5. return the result array as the final answer */


class Solution {
public:
    string interpret(string command) {
        string test="",result;     //Taking two variables one for testing and one for storing the answer
        
        for(char x: command){  
            test+=x;               //take each character from the given array one by one anc check the conditions
            if(test=="G"){
                result+="G";       //if that character == G then add it to the result array
                test="";           //and make the test array empty for next testing
            }else if(test=="()"){
                result+="o";       //if the character == () then add "o" to the result array
                test="";           //and make the test array empty for next testing
            }else if(test=="(al)"){
                result+="al";      //if the character == "(al)" then add "al" to the result array
                test="";           //and make the test array empty for the next testing
            }
        }
        return result;             //return the result array as your final answer
    }
};

