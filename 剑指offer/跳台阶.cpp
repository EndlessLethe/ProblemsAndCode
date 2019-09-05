class Solution {
public:
    int jumpFloor(int number) {
        const int MAXN = 1e6;
        int f[MAXN] = {0};
        f[0] = f[1] = 1;
        for (int i = 2; i <= number; i++) {
            f[i] = f[i-1] + f[i-2];
        }
        return f[number];
    }
};
