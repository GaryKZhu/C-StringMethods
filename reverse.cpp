#include <iostream>
#include <algorithm>
int main() {
    
    std::string inputstr = "I like Evan";
    std::reverse(inputstr.rbegin(), inputstr.rend());
    std::cout << inputstr;
}
