#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main () {
    std::string lol = "sdk";
    std::stringstream lol_ss(lol);
    std::string temp_string;

    while (getline(lol_ss, temp_string))
    {
        std::cout << temp_string << ' ';
    }
    
    return 0;
}