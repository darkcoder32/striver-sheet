package main

import "fmt"

func main() {
	fmt.Println(generate(5))
}

func generate(numRows int) [][]int {
	ans := [][]int{}
	ans = append(ans, []int{1})
	for i := 1; i < numRows; i++ {
		buf := []int{}
		for j := 0; j <= i; j++ {
			if j-1 < 0 {
				buf = append(buf, ans[i-1][j])
			} else if j < len(ans[i-1]) {
				buf = append(buf, ans[i-1][j-1]+ans[i-1][j])
			} else {
				buf = append(buf, ans[i-1][j-1])
			}
		}
		ans = append(ans, buf)
	}
	return ans
}
