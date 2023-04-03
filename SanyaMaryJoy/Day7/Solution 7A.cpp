class Solution {
public:
    bool isUgly(int n) {
        if(n==0){
            return false;
        }
        while(n!=1){
            int i=n;
            if(i%2==0){
                n/=2;
            }
            else if(i%3==0){
                n/=3;
            }
            else if(i%5==0){
                n/=5;
            }
            else return false;
        }
        return true;
        
    }
};