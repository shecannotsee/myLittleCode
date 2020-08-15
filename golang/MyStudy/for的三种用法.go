//go程序模板
package main

import "fmt"

func main() {
	//�?一�?
	for i := 0; i < 20; i++ {
		fmt.Printf("%v ", i)
	}
	fmt.Printf("\n")
	//�?二�??
	var n int = 0
	for n < 20 {
		fmt.Printf("%v ", n)
		n++
	}
	fmt.Printf("\n")
	//�?三�??
	var j int = 0
	for {
		if j == 10 {
			fmt.Println("此时j�?10")
			break
		}
		j++
	}
}
