// Practice 8
/*
*  Напишите программу, которая использует массив char и цикл для чтения но 
*  одному слову за раз до тех пор, пока не будет введено слово done. Затем  
*  программа должна сообщить количество введенных слов (исключая done). Пример 
*  запуска должен быть таким: 
*		Вводите слова (для завершения введите слово done): 
*		anteater birthday category dumpsteг 
*		envy finagle geometry done for sure 
*		Вы ввели 7 слов . 
*  Вы должны включить заголовочный файл cstring и применять функцию 
*  strcmp () для выполнения проверки. 
*/

#include <iostream>
#include <cstring>

const char exitKeyWord[] = "done";
const int strSize = 20;

int main()
{
	using namespace std;

	char str[strSize];
	int count = 0;

	cout << "Enter the words (to stop, type '" << exitKeyWord << "'):" << endl;
	(cin >> str).get();
	while (strcmp(str, exitKeyWord))
	{
		(cin >> str).get();
		count++;
	}
	cout << "You've written " << count << " words.";

	return 0;
}