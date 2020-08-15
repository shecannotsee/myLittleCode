#include <stdio.h>
#include <algorithm>
void sort(int arr[],int n){
	int i, j;
    int temp;
    for (i = 1; i < n; i++) {
        temp = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > temp;j--)
            arr[j + 1] = arr[j];
        arr[j + 1] = temp;
    }
} 

int main (){
	int temp[52];
	/*
	* random_shuffle:对指定范围内的元素随机调整次序。重载版本输入一个随机数产生操作。
	*/
	std::random_shuffle( temp, temp+52 );
      
    sort(temp,52);
	for(int n=0;n<52;++n)
	printf("%d\n",temp[n]);
	system("pause");
	return 0;
}
