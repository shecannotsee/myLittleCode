#include <iostream>

void InsertSort(int* arr, int len) {
    int i, j;
    int temp;
    for (i = 1; i < len; i++) {
        temp = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > temp;j--)
            arr[j + 1] = arr[j];
        arr[j + 1] = temp;
    }
}

int main(){
	std::cout<<"how many number?"<<std::endl;
	int n;
	std::cin>>n;
	
	int* p= new int[n];
	std::cout<<"input the number"<<std::endl;
	for(int i=0;i<n;i++){
		std::cin>>*(p+i); 
	}
	InsertSort(p,n);
	
	for(int i=0;i<n;++i){
		std::cout<<*(p+i)<<" is "<<n-i<<std::endl;
	}
	
	delete[]p;
	system("pause");
	return 0;
} 
