class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set <char> Set;

        int Max = 0;
        int start = 0;
        int end = 0;

        while(end < s.size()){
            auto it = Set.find(s[end]);

            if(it == Set.end()){
                if(Max < (end-start+1)){
                    Max = end-start+1;
                }
                Set.insert(s[end]);
                end++;
            }
            else{
                Set.erase(s[start]);
                start++;
            }
        }
        return Max;
    }
};