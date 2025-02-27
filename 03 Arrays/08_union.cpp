#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> mergeAndRemoveDuplicates(vector<int>& a, vector<int>& b) {
    int m = a.size(), n = b.size();
    vector<int> ans;

    // Merge both vectors
    for (auto it : a) ans.push_back(it);
    for (auto it : b) ans.push_back(it);

    // Sort the merged vector
    sort(ans.begin(), ans.end());

    vector<int> res;
    
    // Remove duplicates from the sorted vector
    for (int i = 0; i < ans.size(); i++) {
        if (i == 0 || ans[i] != ans[i - 1]) {
            res.push_back(ans[i]);
        }
    }

    return res;
}

int main() {
    vector<int> a = {1, 2, 2, 4};
    vector<int> b = {2, 3, 5, 6};

    vector<int> result = mergeAndRemoveDuplicates(a, b);

    // Print the result
    cout << "Merged and unique sorted result: ";
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
