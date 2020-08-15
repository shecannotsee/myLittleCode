//server2是一个迷你的回声和计数服务器
package main

import (
	"fmt"
	"log"
	"net/http"
	"sync"
)

var mu sync.Mutex
var count int

func main() {
	http.HandleFunc("/", handler)
	http.HandleFunc("/count", counter)
	log.Fatal(http.ListenAndServe("localhost:8000", nil))
}

//处理程序回显请求的URL的路径部分
func handler(w http.ResponseWriter, r *http.Request) {
	mu.Lock()
	count++
	mu.Unlock()
	fmt.Fprintf(w, "URL.path = %q\n", r.URL.Path)
}

//counter回显目前为止调用的次数
func counter(w http.ResponseWriter, r *http.Request) {
	mu.Lock()
	count++
	mu.Unlock()
}
