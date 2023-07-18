class Solution {
public:
    unordered_map<string, int> mem;
    int minKnightMoves(int x, int y) 
    {
        x = abs(x); y = abs(y);
        auto key = to_string(x)+" "+to_string(y);
        if (mem.count(key)) return mem[key];
        if (x + y == 0) return 0;
        else if (x + y == 2) return 2;
        return mem[key] = 1 + min(minKnightMoves(x-1, y-2), minKnightMoves(x-2, y-1));
    }
};