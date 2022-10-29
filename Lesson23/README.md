Разделите следующую программу на два файла (main.cpp и input.cpp): main.cpp 
должен содержать функцию main(), а input.cpp — функцию getInteger().

Помните, что для функции getInteger() вам понадобится предварительное 
объявление в main.cpp.

Текст программы:
«#»include <iostream> 

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