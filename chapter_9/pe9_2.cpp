//// static.cpp -- using a static local variable
//#include <iostream>
//#include <string>
//
//// function prototype
//void strcount(const std::string& str);
//
//int main()
//{
//	using namespace std;
//	string input;
//	cout << "Enter a line:\n";
//	
//	while (getline(cin, input) && input != "")
//	{
//		strcount(input);
//		cout << "Enter next line (empty line to quit):\n";
//	}
//	cout << "Bye\n";
//
//	return 0;
//}
//
//void strcount(const std::string& str)
//{
//	using namespace std;
//	static int total = 0; // static local variable
//	int count = str.length(); // automatic local variable
//	
//	cout << "\"" << str << "\" contains ";
//	total += count;
//	cout << count << " characters\n";
//	cout << total << " characters total\n";
//}