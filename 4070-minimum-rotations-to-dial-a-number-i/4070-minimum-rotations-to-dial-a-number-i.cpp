class Solution {
public:
    int minRotations(string s) {
        char prev='0';
        int total_rotation=0,rotation;
        for(char curr:s){
            rotation=abs(curr-prev);
            if(rotation>5) rotation=10-rotation;
            total_rotation+=rotation;
            prev=curr;
        }
        return total_rotation;
    }
};