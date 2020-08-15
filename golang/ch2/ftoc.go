//ftoc输出两个华氏温度和摄氏温度的转换
package main

import "fmt"

func main() {
	const freezingF, boilingF = 32.0, 212.0
	fmt.Printf("%g华氏温度 = %g摄氏温度\n", freezingF, fToc(freezingF))
	fmt.Printf("%g华氏温度 = %g摄氏温度\n", boilingF, fToc(boilingF))
}
func fToc(f float64) float64 {
	return (f - 32) * 5 / 9
}
