#include<iostream>

using namespace std;

template<class T>
class Node {
public:
	T data;
	Node* next;

	Node(int d)
	{
		this->data = d;
		next = nullptr;
	}
};

template<class T>
class LinkedList {
private:
	Node<T>* head;

public:
	LinkedList()
	{
		head = nullptr;
	}

	int isEmpty()
	{
		if (head == nullptr)
			return 1;
		else
			return 0;

	}

	void addNode(int d)
	{
		Node <T> * newnode = new Node<T>(d);

		if (head == nullptr)
		{
			head = newnode;
			return;
		}

		Node<T>* temp = head;
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}

		temp->next = newnode;
	}

	void printList()
	{
		Node<T>* temp = head;
		while (temp != nullptr)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}

	void deletefront()
	{
		if (isEmpty() == 1)
		{
			cout << "Its empty" << endl;
			return;
		}

		Node<T>* temp = head;

		head = head->next;

		delete temp;
	}

	bool contains(int x)
	{
		Node<T>* temp = head;

		while (temp != nullptr)
		{
			if (temp->data == x)
				return true;
			temp = temp->next;
		}
		return false;
	}

	int length()
	{
		int i = 0;
		Node <T>* temp = head;

		while (temp != nullptr)
		{
			i++;
			temp = temp->next;
		}

		return i;
	}

	void reverseList()
	{
		Node<T>* temp = head;
		Node<T>* nextnode = nullptr;

		while (temp != nullptr)
		{
			head = temp;
			nextnode = temp->next;
			temp->next = nullptr;
			temp = nextnode;
		}
	}
};


int main()
{
	LinkedList<int> list1;

	cout << list1.isEmpty() << endl;

	list1.addNode(1);
	list1.addNode(2);
	list1.addNode(3);
	list1.addNode(4);
	list1.addNode(5);

	list1.printList();

	cout << list1.isEmpty() << endl;

	list1.deletefront();
	list1.printList();

	list1.deletefront();
	list1.printList();

	if (list1.contains(2))
		cout << "it contains 2" << endl;

	cout << "the length of the list is " << list1.length() << endl;

	cout << "The link is reversed:" << endl;
	list1.printList();

	return 0;

}
