class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int bottlesdrunk=numBottles;
        int fullbottles=0, emptybottles=numBottles;
        while(emptybottles-numExchange>=0){
            emptybottles-=numExchange;
            fullbottles++;
            numExchange++;
            bottlesdrunk+=fullbottles;
            emptybottles+=fullbottles;
            fullbottles-=fullbottles;
        }
        bottlesdrunk+=fullbottles;
        return bottlesdrunk;
    }
};