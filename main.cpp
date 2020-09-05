#include <iostream> 
#include <deque> 
#include<algorithm>
using namespace std;

void show(deque <int> de)
{
	deque <int> ::iterator it;
	for (it = de.begin(); it != de.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int n,x;
	cout << "Введите количество элементов" << endl;
	cin >> n;
	cout << "Введите количество элементов для перемещения на перед" << endl;
	cin >> x;
	deque <int> d;
	for (int i = 0; i <n; i++) {
		int a;
		cout << "Введите число" << endl;
		cin >> a;
		d.push_back(a);
	}
	cout << "Вывод Очереди:" << endl;
	show(d);
	cout << endl;
	for (int i = 0; i < x; i++) {
		int tmp;
		tmp = d.back();
		d.pop_back();
		d.emplace_front(tmp);
	}
	
	cout << "Очередь после обработки : " << endl;
	show(d);
	system("Pause");
	return 0;
}
