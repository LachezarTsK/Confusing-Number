
#include <array>
using namespace std;

class Solution {

    static const int NOT_A_CONFUSING_NUMBER = -1;
    static constexpr array<int, 10> MAP_ROTATED_CONFUSING_NUMBERS
                    = { 0 /*0 => 0*/, 1 /*1 => 1*/, NOT_A_CONFUSING_NUMBER, NOT_A_CONFUSING_NUMBER,
                    NOT_A_CONFUSING_NUMBER, NOT_A_CONFUSING_NUMBER, 9/*6 => 9*/,
                    NOT_A_CONFUSING_NUMBER, 8/*8 => 8*/, 6/*9 => 6*/ };

public:
    bool confusingNumber(int inputValue) const {
        int copyInputValue = inputValue;
        int rotatedInputValue = 0;

        while (copyInputValue > 0) {
            int digit = copyInputValue % 10;
            if (MAP_ROTATED_CONFUSING_NUMBERS[digit] == NOT_A_CONFUSING_NUMBER) {
                return false;
            }
            copyInputValue /= 10;
            rotatedInputValue = rotatedInputValue * 10 + MAP_ROTATED_CONFUSING_NUMBERS[digit];
        }
        return rotatedInputValue != inputValue;
    }
};
