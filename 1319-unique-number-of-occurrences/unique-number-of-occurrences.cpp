class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for (int num : arr) {
            freq[num]++;
        }
        
        unordered_set<int> occurrences;
        for (auto &p : freq) {
            if (occurrences.count(p.second)) {
                return false;
            }
            occurrences.insert(p.second);
        }
        
        return true;
    }
};
