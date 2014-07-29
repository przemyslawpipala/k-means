#include <iostream>
#include <conio.h>
#include <cmath>
#include <vector>

using namespace std;

vector <int> tabx;
vector <int> taby;
vector <int> tabkx;
vector <int> tabky;
vector <double> tabwynik1;
vector <double> tabwynik2;
vector <double> tabwynik3;

int z;
int x;
int y;
double a;
double minilol;


int main()
{
	cout << "Ile punktow chcesz umiescic na ukladzie wspolrzednych? (max. 20)" << endl;
	cin >> z;
	for (int i=1; i<=z; i++)
	{
		cout << "Podaj wartosc X " << i << " punktu: ";
		cin >> x;
		tabx.push_back(x);
		cout << "Podaj wartosc Y " << i << " punktu: ";
		cin >> y;
		taby.push_back(y);
	}
	cout << endl << "Podaj wspolrzedne dla trzech punktow K."<<endl;
	for (int i=1; i<=3; i++)
	{
		cout << "Podaj wartosc X " << i << " punktu K: ";
		cin >> x;
		tabkx.push_back(x);
		cout << "Podaj wartosc Y " << i << " punktu K: ";
		cin >> y;
		tabky.push_back(y);
	}
		
	// mierzenie odleglosci od punktu K1
	for (int i=0; i<tabx.size();i++)
	{
		a = sqrt(pow((tabx[i]-tabkx[0]), 2)+pow((taby[i]-tabky[0]), 2));
		tabwynik1.push_back(a);
	//	cout << a << endl;
	}
	// mierzenie odleglosci od punktu K2
	for (int i=0; i<tabx.size();i++)
	{
		a = sqrt(pow((tabx[i]-tabkx[1]), 2)+pow((taby[i]-tabky[1]), 2));
		tabwynik2.push_back(a);
	//	cout << a << endl;
	}
	// mierzenie odleglosci od punktu K3
	for (int i=0; i<tabx.size();i++)
	{
		a = sqrt(pow((tabx[i]-tabkx[2]), 2)+pow((taby[i]-tabky[2]), 2));
		tabwynik3.push_back(a);
	//	cout << a << endl;
	}
	
	for (int i=0; i<tabx.size(); i++)
	{
		if (static_cast<double>(tabwynik1[i]) < static_cast<double>(tabwynik2[i])) 
			minilol=1;
			//cout << endl << "Punkt " << i+1 << " o wspolrzednych (" << tabx[i] << "," << taby[i] << ") nalezy do punktu K1";
			else minilol=2;
			//cout << endl << "Punkt " << i+1 << " o wspolrzednych (" << tabx[i] << "," << taby[i] << ") nalezy do punktu K2";
		if (minilol > static_cast<double>(tabwynik3[i])) minilol = 3;
			//cout << endl << minilol;
			//cout << endl << "Punkt " << i+1 << " o wspolrzednych (" << tabx[i] << "," << taby[i] << ") nalezy do punktu K3";
		if (minilol==1)
		cout << endl << "Punkt " << i+1 << " o wspolrzednych (" << tabx[i] << "," << taby[i] << ") nalezy do punktu K1";
		if (minilol==2)
		cout << endl << "Punkt " << i+1 << " o wspolrzednych (" << tabx[i] << "," << taby[i] << ") nalezy do punktu K2";
		if (minilol==3)
		cout << endl << "Punkt " << i+1 << " o wspolrzednych (" << tabx[i] << "," << taby[i] << ") nalezy do punktu K3";
	}
	
	getch();
	return 0;
}
