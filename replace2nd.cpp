#include <iostream>
#include <sstream>
#include <algorithm>"

using namespace std;
int main(){
    string inputstr = "I like Evan";
    int count;
    for (int i = 0; i<inputstr.length(); i++) {
        if (inputstr[i] == 'e' || inputstr[i] == 'E') {
            count = count + 1;
            if (count == 2) {
                inputstr[i] = 'L';
            }
        }
        
    }
    
    cout << inputstr;

}
