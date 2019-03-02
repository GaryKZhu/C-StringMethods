#include <iostream>
#include <sstream>
#include <algorithm>"

using namespace std;
int main(){
    string inputstr = "I like Evan";
    size_t n = std::count(inputstr.begin(), inputstr.end(), 'e');
    cout << n;

}
