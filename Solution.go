
package main

import "fmt"

const NOT_A_CONFUSING_NUMBER = -1

var MAP_ROTATED_CONFUSING_NUMBERS = [10]int{
	0 /*0 => 0*/, 1 /*1 => 1*/, NOT_A_CONFUSING_NUMBER, NOT_A_CONFUSING_NUMBER,
	NOT_A_CONFUSING_NUMBER, NOT_A_CONFUSING_NUMBER, 9, /*6 => 9*/
	NOT_A_CONFUSING_NUMBER, 8 /*8 => 8*/, 6 /*9 => 6*/}

func confusingNumber(inputValue int) bool {
    copyInputValue := inputValue
    rotatedInputValue := 0

    for copyInputValue > 0 {
        digit := copyInputValue % 10
        if MAP_ROTATED_CONFUSING_NUMBERS[digit] == NOT_A_CONFUSING_NUMBER {
            return false
        }
        copyInputValue /= 10
        rotatedInputValue = rotatedInputValue * 10 + MAP_ROTATED_CONFUSING_NUMBERS[digit]
    }
    return rotatedInputValue != inputValue
}
