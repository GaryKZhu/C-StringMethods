#include <iostream>
#include <sstream>
#include <algorithm>"

using namespace std;

int main(){
    string line = "I like Evan";
    string arr[4];
    int i = 0;
    stringstream ssin(line);
    while (ssin.good() && i < 4){
        ssin >> arr[i];
        ++i;
    }
    std::reverse(std::begin(arr), std::end(arr));
    for(auto e : arr) std::cout << e << ' ';
}
