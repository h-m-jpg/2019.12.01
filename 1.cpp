#include <iostream.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int age;
	cout << "How old are you?" << endl ;
	cin >> age;
	age = sqrt(age);
	cout << "I am " << age << " years old" << endl;
	return 0;
}