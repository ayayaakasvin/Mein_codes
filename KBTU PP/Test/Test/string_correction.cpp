#include <vector>
#include <string> 
#include <algorithm>
#include <iostream>

std::vector<std::string> sortByLength(std::vector<std::string> array) {
	std::sort(array.begin(), array.end(), [](const std::string a, const std::string b) {return a.length() < b.length(); });
	return array;
}	

int main() {
	std::vector <std::string> answer = sortByLength({ "I", "To", "Beg", "Life" });
	for (std:: string i : answer)
	{
		std::cout << i << ' ';
	}

	return 0;
}