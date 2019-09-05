class Solution {
public:
    int cutRope(int number) {
        if (number == 1) return 1;
        if (number == 2) return 1;
        if (number == 3) return 2;
        if (number % 3 == 0) return pow(3, number/3);
        else if (number % 3 == 2) return pow(3, (int)(number/3)) * 2;
        else return pow(3, (int)(number/3)-1) * 4;
    }
};
