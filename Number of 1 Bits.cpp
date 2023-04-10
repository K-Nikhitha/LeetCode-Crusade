class Solution {
public:
    int hammingWeight(uint32_t n) {
    int a=0;
        for(int i=0;i<32;i++)
        {
            a+=n&1;
            n=n>>1;
        }
        return a;
    }
};
