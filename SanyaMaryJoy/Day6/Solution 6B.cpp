class Solution {
public:
    int addDigits(int num) {
         int result = 0;
    if (num <= 9)
        return num;
    while (num != 0)
    {
        result = result + num % 10;
        num = num / 10;
        if (result > 9 && num == 0)
        {
            num = result;
            result = 0;
        }
    }
    return result;
    }
};