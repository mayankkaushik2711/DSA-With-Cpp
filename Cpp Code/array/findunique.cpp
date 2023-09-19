#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> vecto;
        int i = 0;
        sort(arr.begin(), arr.end());
        
        while (i < arr.size()) {
            int count = 1;
            for (int j = i + 1; j < arr.size(); j++) {
                if (arr[i] == arr[j]) {
                    count++;
                } else {
                    break;
                }
            }
            vecto.push_back(count);
            i = i + count;
        }
        
        sort(vecto.begin(), vecto.end());
        
        for (int i = 0; i < vecto.size() - 1; i++) {
            if (vecto[i] == vecto[i + 1]) {
                return false;
            }
        }
        
        return true;
    }
};

int main() {
    Solution solution;
    vector<int> arr = {3, 1,1,1,1, 2, 2, 3, 3, 4};
    bool result = solution.uniqueOccurrences(arr);
    cout << "Occurrences are " << (result ? "unique" : "not unique") << endl;
    return 0;
}
