class Solution {
public:
    int reverse(int x) {
       long num=0;
       while(x!=0){
           num=num*10;
           num=num+(x%10);
           x/=10;
       }
       if (num > INT_MAX || num < INT_MIN) {
           return 0;
           }
       else {
           return num;
           }

    }
};