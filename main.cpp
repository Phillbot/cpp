#include <iostream>
using namespace std;

class ClassStrings
{
public:
	string g;
	string ng;
};

void bye_func(string text) {
	cout << text << endl;
}

int main()
{
	setlocale(0, "");

	int b;

	cout << "Сколько итераций ты хош : ";
	cin >> b;

	ClassStrings gOrNg{ " четное" , " не четное" };

	for (int i = 0; i <= b; i++) {
		i % 2 == 0 ? cout << i << gOrNg.g << endl : cout << i << gOrNg.ng << endl;

	};

	bye_func("bye");
	system("pause");

	return 0;
}