package main

import "fmt"
const(
	i = 1<<iota   //iota为0，1左移0位
	j = 3<<iota   //iota为1，3左移1位
	k			  //iota为2，3左移2位
	l			  //iota为3，3左移3位
)
func main() {
	fmt.Println("i=",i)//1
	fmt.Println("j=",j)//6
	fmt.Println("k=",k)//12
	fmt.Println("l=",l)//24
}
