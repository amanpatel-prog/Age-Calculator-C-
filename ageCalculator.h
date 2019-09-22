#include <iostream>
using namespace std;

int main()
{
	int age, years, total; // Variables
	cout << "Enter your Current Age:";
	cin >> age;
	cout << "How many years you want to add to Your age? ";
	cin >> years;
	total = age + years;
	cout << "Your Age after " << years ;
	cout << " years will be " << total<<endl;
	return 0;
} 



