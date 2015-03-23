#include <memory>

template <typename T> struct Node {
	bool isBlack;
	std::unique_ptr<Node<T>> leftChild;
	std::unique_ptr<Node<T>> rightChild;
	
	std::shared_ptr<Node<T>> parent;

	Node(T val) : value(val) {}
	T getVal(){
		return value;
	}
	
	private:
		T value;
};