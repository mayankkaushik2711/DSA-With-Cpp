#include <iostream>
#include <string>

void findAllSubstrings(const std::string& str) {
    int n = str.length();

    // Outer loop generates starting indices for substrings
    for (int i = 0; i < n; ++i) {
        // Inner loop generates substring lengths
        for (int len = 1; len <= n - i; ++len) {
            // Extract the substring from the current starting index and length
            std::string substring = str.substr(i, len);
            std::cout << substring << std::endl;
        }
    }
}

int main() {
    std::string inputString = "mayank";
    findAllSubstrings(inputString);

    return 0;
}
// comment