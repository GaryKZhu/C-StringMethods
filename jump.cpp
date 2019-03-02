#include <iostream>

int main() {
    
    std::string inputstr = "I like Evan";
    for (int i = 0; i<inputstr.length(); i++) {
        if (i % 2 == 0 || i == 0) {
            std::cout << inputstr[i];
            
            }
        
        }
    
}
