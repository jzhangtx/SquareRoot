package main

import "fmt"

func SearchRoot(num int) int {
	for i := 0; i <= num; i++ {
		if i*i == num {
			return i
		} else if i*i > num {
			return i - 1
		}
	}

	return -1
}

func main() {
	for {
		fmt.Print("The number to search square root for: ")
		num := 0
		fmt.Scan(&num)
		if num < 0 {
			break
		}

		fmt.Printf("Number %d's square root is %d\n", num, SearchRoot(num))
	}
}
