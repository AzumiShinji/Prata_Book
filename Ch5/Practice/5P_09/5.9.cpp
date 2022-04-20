// Practice 9
/*
* Напишите программу, соответствующую описанию программы из упражнения 8, 
* но с использованием объекта string вместо символьного массива. Включите 
* заголовочный файл string и применяйте операции отношений для  
* выполнения проверки. 

*/

#include <iostream>
#include <string>

const std::string exitKeyWord = "done";

int main()
{
	using namespace std;
	string str;
	int count = 0;

	cout << "Enter the words (to stop, type '" << exitKeyWord << "'):" << endl;
	(cin >> str).get();
	while (str != exitKeyWord)
	{
		(cin >> str).get();
		count++;
	}
	cout << "You've written " << count << " words.";

	return 0;
}