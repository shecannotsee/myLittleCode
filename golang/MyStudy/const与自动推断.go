package main

import "fmt"

func main() {
	const length int = 10
	const width int = 5
	var area int
	const a,b,c = 1 , false , "str"
	
	area = length * width
	fmt.Printf("面积为：%d",area)
	println()
	println(a,b,c)
}
