class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        int plantable = 0;
        int size = flowerbed.size();

        if (size == 1) {
            if (flowerbed[0] == 0) plantable++;
            return plantable >= n;
        }

        // First position
        if (flowerbed[0] == 0 && flowerbed[1] == 0) {
            plantable++;
            flowerbed[0] = 1;
        }

        // Middle positions
        for (int i = 1; i < size - 1; i++) {
            if (flowerbed[i] == 0 &&
                flowerbed[i - 1] == 0 &&
                flowerbed[i + 1] == 0) {

                plantable++;
                flowerbed[i] = 1;
            }
        }

        // Last position
        if (flowerbed[size - 1] == 0 &&
            flowerbed[size - 2] == 0) {

            plantable++;
        }

        return plantable >= n;
    }
};