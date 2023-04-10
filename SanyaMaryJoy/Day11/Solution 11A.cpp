class Solution {
public:
    int hammingDistance(int x, int y) {
    int hd=0;
    int n=x^y;
        for(int i=n;i!=0;i>>=1){
            if(i&1==1){
                hd++;
            }   
        }
        return hd;
    }
};