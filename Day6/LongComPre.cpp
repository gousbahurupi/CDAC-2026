#include <vector>
#include <string>
using namespace std;

string longest_common_prefix(vector<string>& strs) {
    if (strs.empty()) return "";
    
    string prefix = strs[0];
    for (size_t i = 1; i < strs.size(); i++) {
        while (strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.length() - 1);
            if (prefix.empty()) return "";
        }
    }
    return prefix;
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    string lcp = longest_common_prefix(strs);
    if (!lcp.empty()) {
        printf("Longest Common Prefix: %s\n", lcp.c_str());
    } else {
        printf("No Common Prefix Found.\n");
    }
    return 0;
}