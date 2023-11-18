#include <iostream>

template<typename T>
void iter(T a[], int len, void (*f)(T&)){
	for (int i=0;i<len;i++) f(a[i]);
}
template<typename T>
void iterStaticInc(T &item){
	static int i = 0;
	item += i++;
}
template<typename T>
void iterPrint(T item){
	std::cout << item << " ";
}
