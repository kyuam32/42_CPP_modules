#include <iostream>


int main(){

	std::string const text = "HI THIS IS BRAIN";
	std::string const *ptr = &text;
	std::string const &ref = text;



	std::cout << "---------Address---------"<< std::endl;
	std::cout << "Original string : " << &text << std::endl;
	std::cout << "Pointer         : " << ptr << std::endl;
	std::cout << "Reference       : " << &ref << std::endl;
	std::cout << "----------text-----------"<< std::endl;
	std::cout << "Original string : " << text << std::endl;
	std::cout << "Pointer         : " << *ptr << std::endl;
	std::cout << "Reference       : " << ref << std::endl;

};