��������� ��������� ��������� �� ��� ����� (main.cpp � input.cpp): main.cpp 
������ ��������� ������� main(), � input.cpp � ������� getInteger().

�������, ��� ��� ������� getInteger() ��� ����������� ��������������� 
���������� � main.cpp.

����� ���������:
	
	#include <iostream>

	int getInteger() 
	{ 
		std::cout << "Enter an integer: ";
		int x; 
		std::cin >> x; 
		return x; 
	} 
	
	int main() 
	{ 
		int x = getInteger(); 
		int y = getInteger(); 

		std::cout << x << " + " << y << " is " << x + y << '\n'; 
		return 0; 
	}