#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string interpret(string command) {
    string test = "", result;
    for(char x:command){
        test += x;
        if(test == "G"){
            result += "G";
            test = "";
        }
        else if(test == "()"){
            result += "o";
            test = "";
        }
        else if(test == "(al)"){
            result += "al";
            test = "";
        }
    }
    return result;
}

int main(){
    string command = "G()()()()(al)";
    cout << interpret(command);
}
