
class Solution {

    private companion object {
        const val NOT_A_CONFUSING_NUMBER = -1
        val MAP_ROTATED_CONFUSING_NUMBERS = intArrayOf(
            0 /*0 => 0*/, 1 /*1 => 1*/, NOT_A_CONFUSING_NUMBER, NOT_A_CONFUSING_NUMBER,
            NOT_A_CONFUSING_NUMBER, NOT_A_CONFUSING_NUMBER, 9/*6 => 9*/,
            NOT_A_CONFUSING_NUMBER, 8/*8 => 8*/, 6/*9 => 6*/
        )
    }

    fun confusingNumber(inputValue: Int): Boolean {
        var copyInputValue = inputValue
        var rotatedInputValue = 0

        while (copyInputValue > 0) {
            val digit = copyInputValue % 10
            if (MAP_ROTATED_CONFUSING_NUMBERS[digit] == NOT_A_CONFUSING_NUMBER) {
                return false
            }
            copyInputValue /= 10
            rotatedInputValue = rotatedInputValue * 10 + MAP_ROTATED_CONFUSING_NUMBERS[digit]
        }
        return rotatedInputValue != inputValue
    }
}
