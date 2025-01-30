#include <iostream>

using namespace std;

class Pattern{
    public:
    void createSpaces(int n){
        for(int i = 0; i < n; i++){
            cout << " ";
        }
    }

    void createRow(int n){
        for(int i = 0; i < n; i++){
            cout << "*"; 
        }
        cout << endl;
    }

    void createPattern(int userInput){
        int copy = userInput;

        for(int i = userInput; i >= 1; i--){
            createSpaces(copy - userInput);
            createRow(userInput + i - 1);
            userInput--;
        }
    }
};


int main(){
    Pattern ob;
    ob.createPattern(6);
}