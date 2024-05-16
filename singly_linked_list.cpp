#include<iostream>
using namespace std;

template<typename T>
class Node {
public:
	T data;
	Node* next;

	Node()
	{
		data = T();
		next = nullptr;
	}

	Node(const T& d, Node* n)
	{
		data = d;
		next = n;
	}
};

template<typename T>
class MyLinkedList {
private:
	Node<T>* head = nullptr;
	int size = 0;

public:

	bool isEmpty() const
	{
		return head == nullptr;
	}

	int getSize()
	{
		return size;
	}

	T front() const
	{
		if (isEmpty())
			throw out_of_range("The list is empty");
		return head->data;
	}

	T back() const
	{
		if (isEmpty())
			throw out_of_range("The list is empty");
		Node<T>* temp = head;

		while (temp->next)
			temp = temp->next;

		return temp->data;
	}

	void pushFront(const T& data)
	{
		Node<T>* newNode = new Node<T>(data, head);

		head = newNode;
		size++;
	}

	void pushBack(const T& data)
	{
		Node<T>* newNode = new Node<T>(data, nullptr);

		if (isEmpty())
			head = newNode;
		else
		{
			Node<T>* temp = head;
			while (temp->next)
				temp = temp->next;
			temp->next = newNode;
		}
		size++;
	}

	void clear()
	{
		while (!isEmpty())
		{
			Node<T>* temp = head;
			head = head->next;
			delete temp;
			size--;
		}
		if (size != 0)
			throw out_of_range("There is an error in clear function");
	}

	//destructor
	~MyLinkedList()
	{
		clear();
	}

	void popFront()
	{
		if (isEmpty())
		{
			cout << "The list is already empty." << endl;
			return;
		}

		Node<T>* temp = head;
		head = head->next;

		// Check if temp is not nullptr before accessing its members
		if (temp)
		{
			delete temp;
			size--;
		}
		else
		{
			// Handle the case where head was nullptr
			cout << "Error: Attempted to pop from an empty list." << endl;
		}
	}

	void popBack()
	{
		if (isEmpty())
			throw out_of_range("The list is empty cant popback");
		
		else if (head->next == nullptr)
			popFront();

		else
		{ 
			Node<T>* temp = head;

			while (temp->next->next != nullptr)
				temp = temp->next;

			delete temp->next;
			temp->next = nullptr;
			size--;
		}
	}

	Node<T>* findPrevious(const T& data)
	{
		Node<T>* temp = head;
		while (temp->next)
		{
			if (temp->next->data == data)
				return temp;
			temp = temp->next;
		}
		return nullptr;
	}

/*	
	void remove(const T& data)
	{
		Node<T>* prevNode = findPrevious(data);
		if(prevNode)
		{
			Node<T>* hold = prevNode->next;
			prevNode->next = prevNode->next->next;
			delete hold;
			size--;
		}
		else
		cout << "Cannot remove element not found in the list" << endl;
	}
*/	

	void remove(const T& data)
	{
		if (!contains(data))
			cout << "List doesnt contain the data" << endl;
		else if (head->data == data)
			popFront();
		else
		{ 

			Node<T>* temp = head;

			while(temp->next)
			{ 
				if (temp->next->data == data)
				{
					Node<T>* hold = temp->next;
					temp->next = temp->next->next;
					delete hold;
					size--;
					return;
				}
				temp = temp->next;
			}
		}
	}

	void insertAfter(const T& data, Node<T>* prev_node)
	{
		if (prev_node != nullptr)
		{
			Node<T>* newNode = new Node<T> (data, prev_node->next);
			prev_node->next = newNode;
			size++;
		}
	}

	bool contains(const T& data)
	{
		if (isEmpty())
			return false;

		Node<T>* temp = head;

		while (temp)
		{
			if (temp->data == data)
				return true;
			temp = temp->next;
		}
		return false;
	}

	void print() const
	{
		Node<T>* temp = head;

		while (temp)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}

};

int main()
{
	MyLinkedList <int> list1;

	list1.pushFront(1);
	list1.pushFront(2);
	list1.pushFront(3);
	list1.pushFront(4);

	cout << "list : ";
	list1.print();
	cout << "size of the list : " << list1.getSize() << endl;

	cout << "is it empty : " << list1.isEmpty() << endl;
	cout << "front element = " << list1.front() << endl;
	cout << "back element = " << list1.back() << endl;

	list1.clear();
	cout << "The list is cleared" << endl;
	cout << "is it empty : " << list1.isEmpty() << endl;
	list1.print();

	list1.pushBack(6);
	list1.pushBack(5);
	list1.pushBack(9);
	list1.pushBack(3);
	
	cout << "New list : ";
	list1.print();
	cout << "size of the list : " << list1.getSize() << endl;

	list1.popFront();

	cout << "After 1 popFront : ";
	list1.print();
	cout << "size of the list : " << list1.getSize() << endl;

	list1.popBack();
	
	cout << "After 1 popBack : ";
	list1.print();
	cout << "size of the list : " << list1.getSize() << endl;

	cout << "Does it contain 4 : " << list1.contains(4) << endl;
	cout << "Does it contain 9 : " << list1.contains(9) << endl;

	list1.remove(9);
	cout << "After removing 9 : ";
	list1.print();
	cout << "size of the list : " << list1.getSize() << endl;

	list1.pushBack(6);

	Node<int>* foundNode = list1.findPrevious(6);
	list1.insertAfter(8, foundNode);
	list1.print();
	cout << "size of the list : " << list1.getSize() << endl;

} 
