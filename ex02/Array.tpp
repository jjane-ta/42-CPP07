#pragma once
template<typename T>
Array<T>::~Array(void){
	delete[] this->_arr;
}

template<typename T>
Array<T>::Array(void): _arr(new T[0]), _size(0){}

template<typename T>
Array<T>::Array(unsigned int n): _arr(new T[n]), _size(n){}

template<typename T>
Array<T>::Array(const Array & instance):_arr(new T[instance.size()]), _size(instance.size()){
	this->_size = instance._size;
	for(size_t i=0;i<this->_size;i++) this->_arr[i] = instance._arr[i];	
}

template<typename T>
Array<T> Array<T>::operator=(const Array & instance){
	delete[] this->_arr;
	this->_arr = new T[instance.size()];
	this->_size = instance._size;
	for(size_t i=0;i<this->_size;i++) this->_arr[i] = instance._arr[i];	
	return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int pos) const{
	if (pos >= this->_size) throw std::exception();
	return this->_arr[pos] ;
}

template<typename T>
unsigned int Array<T>::size(void) const{
	return this->_size;
}

template<typename T>
std::ostream& operator<<(std::ostream &out, Array<T> const& array){
	out << "size= "<< array.size() << ", values= [";
	for(size_t i=0;i<array.size();i++){
		out << array[i];
		if (i != array.size()- 1) out << " ";
	}
	out << "]";
	return out;
}
