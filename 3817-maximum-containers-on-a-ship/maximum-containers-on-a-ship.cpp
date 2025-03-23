class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int cells = n*n;
        int maxcells = maxWeight / w;

        if(maxcells < cells)
            return maxcells;
        else
            return cells;
    }
};