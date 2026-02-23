class Solution {
public:
    bool hasAlternatingBits(int n) {
        unsigned int x=n^(n>>1);//if a number has alternating bits, then shifting it right by 1 will create opposite pattern. and when we xor n and n>>1, it results in a sequence of all 1s.
        return ((x&(x+1))==0);//a number that has all 1s has a special property i.e., x & (x+1)==0. this works because adding 1 to a sequence of all 1s, produces a power of 2(like 111+1=1000), and ANDing them gives 0(111&1000=0)
    }
};