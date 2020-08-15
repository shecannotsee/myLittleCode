package main

import "fmt"

func main() {
	const(
		a = iota		//0
		b				//1
		c				//2
		d = "hello"		//iota为3
		e				//e为hello，iota为4
		f = 100			//f为100，iota为5
		g				//g为100，iota为6
		h = iota		//恢复计数，h为7
		i				//i为8
	)
	
	fmt.Println(a,b,c,d,e,f,g,h,i)
}
