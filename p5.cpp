class Solution {
public:
    string longestPalindrome(string s) {

        string palString = "";
        int length = 0;

        for(int i = 0; i<s.size(); i++){
            int l = i;
            int r = i;

            while(l>=0 && r<s.size() && s[l] == s[r]){
                l--;
                r++;
            }

            if(r-l-1 > length){
                palString = s.substr(l+1, r-l-1);
                length = palString.size();
            }


        }

        for(int i = 0; i<s.size(); i++){
            int l = i;
            int r = i+1;

            while(l>=0 && r<s.size() && s[l] == s[r]){
                l--;
                r++;
            }

            if(r-l-1 > length){
                palString = s.substr(l+1, r-l-1);
                length = palString.size();
            }


        }
       return palString; 
    }
};