#include <iostream>

class smart_array {
public:
smart_array(size_t size): arr_(new int[size]), size_(size)
{   
	std::cout << "constructor called\n";
};
~smart_array(){
    delete[] arr_;
	std::cout << "\ndestructor called\n";
};
void add_element(int x){
	if (this->counter < this->size_) {
		counter++;
		arr_[counter] = x;
		std::cout << arr_[counter] << "\t";
	} else {
		std::cout << "Array index out of bounds!" << std::endl;
	}
};
auto get_element(int a) {

	if(this->size_ >= a) {
		for(int i = 0; i <= a; i++){
			if (i == a) {
				std::cout << arr_[i] << std::endl;
			}
		}
	} else {
		return "\nThere is no such index in the array";
	}

	return "ERROR";
}

private:
	int * arr_;
    size_t size_;
	size_t counter = 0;

};


int main() {

try {
	smart_array arr(5);
	arr.add_element(1);
	arr.add_element(4);
	arr.add_element(155);
	arr.add_element(14);
	arr.add_element(15);
	arr.add_element(16);
	std::cout << arr.get_element(7) << std::endl;
}
catch (const std::exception& ex) {
	std::cout << ex.what() << std::endl;
}

return 0;
}