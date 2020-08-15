//boiling输出水的沸点
package main

import "fmt"

const boilingF = 212.0

func main() {
	var f = boilingF
	var c = (f - 32) * 5 / 9
	fmt.Printf("boiling point = %g 华氏度 or %g摄氏度\n", f, c)
	//输出：
	//boiling point = 212华氏度或者100摄氏度
}
