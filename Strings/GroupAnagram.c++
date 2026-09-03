#include<bits/stdc++.h>
using namespace std;
vector<vector<string>>groupAnagrams(vector<string>&words){
    unordered_map<string, vector<string>> mp;
     for(string word : words){
        string keys = word;
     
     sort(keys.begin(),keys.end());
     mp[keys].push_back(word);
     }
     vector<vector<string>> result;
     for(auto &pair:mp){
        result.push_back(pair.second);
     }

    return result;
}
int main() {
    int n;

    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> words(n);

    cout << "Enter strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    vector<vector<string>> result = groupAnagrams(words);

    cout << "\nGrouped Anagrams:\n";

    for (auto group : result) {
        cout << "[ ";
        for (string word : group) {
            cout << word << " ";
        }
        cout << "]\n";
    }

    return 0;
}