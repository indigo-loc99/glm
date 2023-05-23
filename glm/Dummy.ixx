export module Dummy;
import std;

class DummyType {
public:
	DummyType(const std::string& name_)
		: name_{name_}
	{
	}
	void hi() {
		std::cout << "Hi there " << name_ << "!\n";
	}
	void foo() {
		std::cout << "Foo there, " << name_ << "!\n";
	}
	void bar() {
		std::cout << "Best greeter bar none, " << name_ << ".\n";
	}
private:
	std::basic_string<char> name_;
};
