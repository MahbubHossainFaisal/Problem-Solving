#include<math.h>
class Solution {
public:
    int titleToNumber(string columnTitle) {
       int power = 0;
        int sum =0;
        int sz = columnTitle.size();
        for(int i= sz-1; i>=0; i-- ){
            int num = columnTitle[i] - 64;
            sum += num * pow(26,power);
            power++;
        }
        return sum;
    }
};