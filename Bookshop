#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

class CustomerInfo {
public:
	void output() {
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;

	}
	void input() {
		cin >> name >> surname;
	}
private:
	string name;
	string surname;
};

class Book {
private:
	string book_title;
	string book_author;
	int book_price;
	
public:
	Book(string book_title, string book_author, int book_price)
	{
		this->book_title = book_title;
		this->book_author = book_author ;
		this->book_price = book_price;
	}

	string getTitle()
	{
		return book_title;
	}

	string getAuthor()
	{
		return book_author;
	}

	int getPrice()
	{
		return book_price;
	}
};

int main()
{
	CustomerInfo customer;

	Book novel1("Animal Farm", "George Orwell", 11);
	Book novel2("Slaughterhouse Five", "Kurt Vonnegut", 9);
	Book novel3("The Lord of the Rings", "J.R.R. Tolkien", 13);

	Book horror1("The Shining", "Stephen King", 8);
	Book horror2("It", "Stephen King", 14);
	Book horror3("Pet Sematary", "Stephen King", 12);

	Book fantasy1("The Gunslinger", "Stephen King", 6);
	Book fantasy2("The Silmarillion", "J.R.R. Tolkien", 19);
	Book fantasy3("The Eye of the World", "Robert Jordan", 15);

	vector<Book> novels;
	vector<Book> horrors;
	vector<Book> fantasys;

	novels.push_back(novel1);
	novels.push_back(novel2);
	novels.push_back(novel3);

	horrors.push_back(horror1);
	horrors.push_back(horror2);
	horrors.push_back(horror3);

	fantasys.push_back(fantasy1);
	fantasys.push_back(fantasy2);
	fantasys.push_back(fantasy3);

	vector<string> cart_title;
	vector<string> cart_author;
	vector<int> cart_price;

	int totalprice = 0;


	int conf, i, input, x = 0;

	cout << "Welcome!" << endl;
	cout << "Press 1 to Start Shopping or 0 to Exit." << endl;
	cin >> conf;

	if (conf == 0) {
		system("cls");
		return 0;
	}

	while (conf != 1) {
		system("cls");
		cout << "Please Enter a Valid Input." << endl;
		cin >> conf;

		if (conf == 0) {
			system("cls");
			return 0;
		}
	}

	system("cls");

shop:

	cout << "Please Choose a Genre" << endl;
	cout << "----------------------" << endl;
	cout << "Press 1 for Novellas" << endl;
	cout << "Press 2 for Horror" << endl;
	cout << "Press 3 for Fantasy" << endl;

	cin >> conf;

	while (conf >= 4 || conf <= 0) {
		system("cls");
		cout << "Enter a Valid Input." << endl;
		cin >> conf;
	}

	system("cls");

	switch (conf) {
	case 1:
		for (i = 0; i != 3; i++) {
			cout << i + 1 << setw(25) << setfill(' ') << novels[i].getTitle() << setw(25) << setfill(' ') << novels[i].getAuthor() <<
				setw(25) << setfill(' ') << novels[i].getPrice() << "$" << endl;
		};
		cout << endl;
		break;
	case 2:
		for (i = 0; i != 3; i++) {
			cout << i + 1 << setw(25) << setfill(' ') << horrors[i].getTitle() << setw(25) << setfill(' ') << horrors[i].getAuthor() << 
				setw(25) << setfill(' ') << horrors[i].getPrice() << "$" << endl;
		};
		cout << endl;
		break;
	case 3:
		for (i = 0; i != 3; i++) {
			cout << i + 1 << setw(25) << setfill(' ') << fantasys[i].getTitle() << setw(25) << setfill(' ') << fantasys[i].getAuthor() << 
				setw(25) << setfill(' ') << fantasys[i].getPrice() << "$" << endl;
		};
		cout << endl;
		break;
	}

	cout << "Please Enter the Number of The Book You Want to Purchase." << endl;
	cin >> input;

	system("cls");

	switch (conf) {
	case 1:
		cart_title.push_back(novels[input - 1].getTitle());
		cart_author.push_back(novels[input - 1].getAuthor());
		cart_price.push_back(novels[input - 1].getPrice());
		x++;
		break;
	case 2:
		cart_title.push_back(horrors[input - 1].getTitle());
		cart_author.push_back(horrors[input - 1].getAuthor());
		cart_price.push_back(horrors[input - 1].getPrice());
		x++;
		break;
	case 3:
		cart_title.push_back(fantasys[input - 1].getTitle());
		cart_author.push_back(fantasys[input - 1].getAuthor());
		cart_price.push_back(fantasys[input - 1].getPrice());
		x++;
		break;
	}

	cout << "Press 1 to Finish Shopping & Press 2 to Continue Shopping" << endl;
	cin >> conf;

	system("cls");

	if (conf == 2)
		goto shop;

	while (conf != 1) {
		system("cls");
		cout << "Please Enter a Valid Input." << endl;
		cin >> conf;
	}

	system("cls");

	cout << "Enter Credential Information" << endl << endl;
	cout << "Name Surname" << endl;
	customer.input();

	system("cls");

	cout << "CHECKOUT" << endl << endl;
	customer.output();

	cout << endl << "CART" << endl << endl;
	cout << "Amount of Books in Cart: " << x << endl;

	for (i = 0; i != x; i++) {
		cout << i + 1 << setw(25) << setfill(' ') << cart_title[i] << setw(25) << setfill(' ') << cart_author[i] <<
			setw(25) << setfill(' ') << cart_price[i] << "$" << endl;
		totalprice = totalprice + cart_price[i];
	}

	cout << "Total Price: " << totalprice << "$" << endl;

	return 0;
}
