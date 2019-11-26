#include <iostream>

using namespace std;

class Node
{
public:
	Node(int value)
	{
		number = value;
		next = nullptr;
	}

	void setNext(Node& node)
	{
		next = &node;
	}

	int getNumber()
	{
		return number;
	}

	Node& getNext()
	{
		return *next;
	}

private:
	int number;
	Node* next;
};

int main()
{
	Node first(10);
	Node second(20);

	first.setNext(second);


	cout << first.getNumber() << endl;
	Node nextNode = first.getNext();
	cout << nextNode.getNumber() << endl;

	return 0;
}