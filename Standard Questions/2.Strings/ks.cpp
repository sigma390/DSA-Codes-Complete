#include<bits/stdc++.h>
using namespace std;

// Step 1: Extract string at the key which is a column
// Returns a column key = 2; means second column

string extractStringKey(const string& str, int key) {
    // String tokenizer inbuilt
    char *s = strtok((char*) str.c_str(), " "); // str.c_str() converts a C++ std::string to a C-style string (const char*).
    while(key > 1) {
        s = strtok(NULL, " ");
        key--;
    }
    return string(s);
}

bool lexCompare(pair<string, string> s1, pair<string, string> s2) {
    // Store keys in local vars
    string k1 = s1.second;
    string k2 = s2.second;

    return k1 < k2;
}

bool numCompare(pair<string, string> s1, pair<string, string> s2) {
    string k1 = s1.second;
    string k2 = s2.second;

    return stoi(k1) < stoi(k2);
}

int main() {
    // Take necessary inputs
    int n;
    cin >> n;
    cin.ignore(); // Ignore the newline character after the integer input

    string temp;
    vector<string> ss;
    for (int i = 0; i < n; i++) {
        getline(cin, temp); // Includes white spaces
        ss.push_back(temp);
    }

    // Get key, reversal, and order
    int key;
    string reversal, order;
    cin >> key >> reversal >> order; // Take single word as input

    // Extract tokens
    vector<pair<string, string>> vp;
    for (int i = 0; i < n; i++) {
        vp.push_back({ss[i], extractStringKey(ss[i], key)});
    }

    // Sorting
    if (order == "numeric") {
        sort(vp.begin(), vp.end(), numCompare);
    } else {
        sort(vp.begin(), vp.end(), lexCompare);
    }

    // Reversal
    if (reversal == "true") {
        reverse(vp.begin(), vp.end());
    }

    // Output
    for (int i = 0; i < n; i++) {
        cout << vp[i].first << endl;
    }

    return 0;
}
