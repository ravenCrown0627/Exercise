//#include<iostream>
//#include<string>
//#include<cctype>
//#include "stack00.h"
//
//
//
//int main()
//{
//	using namespace std;
//	Stack st; // create an empty stack
//	char ch;
//	customer cust;
//	
//	cout << "Please enter 'A' for adding customer details, 'P' to process a PO or 'Q' to quit.\n";
//
//	while (cin >> ch && toupper(ch) != 'Q')
//	{
//		while (cin.get() != '\n')
//			continue;
//		if (!isalpha(ch))
//		{
//			cout << '/a';
//			continue;
//		}
//
//		switch (ch)
//		{
//			case 'A':
//			case 'a':
//				cout << "Enter the customer name: ";
//				cin.get(cust.fullname, 35);
//				while (cin.get() != '\n')
//					continue;
//				cout << "Enter the amount of payment: ";
//				cin >> cust.payment;
//
//				if (st.isfull())
//					cout << "Stack already full." << endl;
//				else
//					st.push(cust);
//				break;
//
//			case 'P':
//			case 'p':
//				if (st.isempty())
//				{
//					cout << "Stack already empty." << endl;
//				}
//				else
//				{
//					st.pop(cust);
//					cout << "Customer name " << cust.fullname << " was popped\n";
//				}
//				break;
//		}
//		cout << "Please enter 'A' for adding customer details, 'P' to process a PO or 'Q' to quit.\n";
//	}
//	cout << "Bye\n";
//	return 0;
//}