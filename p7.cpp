class Solution {
public:
    int reverse(int x) {

        int r = 0;

        while(x){
            if(r > INT_MAX/10 || r < INT_MIN/10){
                return 0;
            }

            r =  10*r+x%10;
            x = x/10;
            
        }

       return r;
        
    }
};