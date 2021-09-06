//#include <iostream>
//#include <cstring>
//#include <new>
//
//struct chaff
//{
//	char dross[20];
//	int slag;
//};
//
//char buffer[2 * sizeof(chaff)];
//
//int main()
//{
//	using namespace std;
//
//	//Option 1
//	chaff* obj1 = new (buffer) chaff[2];
//	strcpy_s(obj1[0].dross, "option_1");
//	obj1[0].slag = 1;
//	strcpy_s(obj1[1].dross, "OPTION_1");
//	obj1[1].slag = 2;
//
//	//Option 2
//	chaff* obj2 = new chaff[2];
//	strcpy_s(obj2[0].dross, "option_2");
//	obj2[0].slag = 1;
//	strcpy_s(obj2[1].dross, "OPTION_2");
//	obj2[1].slag = 2;
//
//	for (int i = 0; i < 2; i++)
//	{
//		cout << "dross: " << obj1[i].dross << "\tslag: " << obj1[i].slag << endl;
//		cout << "dross: " << obj2[i].dross << "\tslag: " << obj2[i].slag << endl;
//	}
//
//	delete[] obj2;
//
//	return 0;
//}