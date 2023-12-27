class Solution {
public:
    string convert(string s, int numRows) {

        if(numRows == 1){
            return s;
        }

        string res = "";

        for(int r = 0; r<numRows;r++){
            for(int i = r; i<s.size(); i = i + (numRows-1)*2){
                res += s[i];

                if(r>0 && r<numRows-1 && i + ((numRows-1)*2 - 2*r) < s.size()){
                    res += s[i+((numRows-1)*2 - 2*r)];
                }
            }
        }

        return res;
        
    }
};