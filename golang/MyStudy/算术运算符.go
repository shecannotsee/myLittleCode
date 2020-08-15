package main

import "fmt"

func main() {
	var a int = 21
	var b = 10
	var c int
	
	fmt.Println("a为",a,"b为",b)
	
	c = a + b
	fmt.Println("第一个c=a+b为",c)
	
	c = a - b
	fmt.Println("第二个c=a-b为",c)
	
	c = a * b
	fmt.Println("第二个c=a*b为",c)
	
	c = a / b
	fmt.Println("第二个c=a/b为",c)
	
	a++
	fmt.Println("a++为",a)
	
	a = 21
	a--
	fmt.Println("a修改为21后，a--为",a)
	
}
