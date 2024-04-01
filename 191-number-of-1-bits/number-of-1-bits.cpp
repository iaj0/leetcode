class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        int decimal = n;

        while (decimal>0){
            if(decimal%2 == 1){
                count++;
            }
            decimal/=2;
        }
        return count;
    }   

       
};