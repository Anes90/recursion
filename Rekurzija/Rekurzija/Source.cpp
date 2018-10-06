#include<iostream>
using namespace std;

///*
//Suma kubova parnih brojeva od m i n
//a. silazna rekurzija
//b. uzlazna rekurzija
//c. dekompozicija
//*/
//
//int f1(int i, int j);
//int f2(int i, int j);
//int f3(int i, int j);
//
////Uzlazna rekurzija
//int f1(int i, int j) {
//	if (i > j)
//		return 0;
//	else
//	{
//		if (i % 2 == 1)
//		{
//			i++;
//		}
//		cout << "i = " << i << ", i * i * i = " << endl;
//		return i * i * i + f1(i + 2, j);
//	}
//}
//
////Silazna rekurzija
//int f2(int i, int j) {
//	if (i > j)
//		return 0;
//	else
//	{
//		if (j % 2 == 1)
//		{
//			j--;
//		}
//		cout << "i = " << j << ", i * i * i = " << j * j * j << endl;
//		return j * j * j + f1(i, j - 2);
//	}
//}
//
////Dekompozicija
//int f3(int i, int j) {
//	if (i == j) {
//		if (i % 2 == 0)
//		{
//			cout << "i = " << j << ", i * i * i =" << j * j * j << endl;
//			return j * j * j;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	else {
//		int sr = (i + j) / 2;
//		return f3(i, sr) + f3(sr + 1, j);
//	}
//}
//
//void main() {
//	int m, n;
//	cout << "Unesite vrijednost za \"m\"" << endl;
//	cin >> m;
//	cout << "Unesite vrijednost za \"n\"" << endl;
//	cin >> n;
//
//	int u = f1(m, n);
//	cout << "Uzlazno: " << u << endl;
//	int s = f2(m, n);
//	cout << "Silazno: " << s << endl;
//	int d = f3(m, n);
//	cout << "Dekompozicija: " << d << endl;
//
//	system("pause>0");
//}

/*
Napisati rekurzivnu funkciju koja æe riješiti sljedeæi problem:
Izraèunati sumu brojeva koje je korisnik unio. Rekurzivna funkcija treba od korisnika
zahtijevati unos brojeva sve dok korisnik ne unese broj 0.
Riješiti program bez korištenja petlji!
*/

//int f(int max) {
//	int x;
//	cout << "Unesi broj: ";
//	cin >> x;
//	if (x <= 0)
//		return max;
//	else {
//		return x + f(max);
//	}
//}
//
//void main() {
//	int s;
//	s = f(0);
//	cout << "Suma = " << s << endl;
//	system("pause");
//}