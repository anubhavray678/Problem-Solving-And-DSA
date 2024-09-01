class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> traversed;
        for (int step = 1, direction = 0; traversed.size() < rows * cols; ++step) {
            // direction = 0 -> East, direction = 1 -> South
            // direction = 2 -> West, direction = 3 -> North
            for (int i = 0; i < 2; ++i) {
                for (int j = 0; j < step; ++j) {
                    // Validate the current position
                    if (rStart >= 0 && rStart < rows && cStart >= 0 && cStart < cols) {
                        traversed.push_back({rStart, cStart});
                    }

                    // Move in the current direction
                    if (direction == 0) { // East
                        cStart += 1;
                    } else if (direction == 1) { // South
                        rStart += 1;
                    } else if (direction == 2) { // West
                        cStart -= 1;
                    } else if (direction == 3) { // North
                        rStart -= 1;
                    }
                }
                direction = (direction + 1) % 4;
            }
        }
        return traversed;
    }
};
