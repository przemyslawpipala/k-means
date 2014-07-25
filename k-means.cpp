#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int tab[20][4];
double tab1[20];
double tab2[20];
double tab3[20];
double tab4[20];
double tab5[20];
int tabwynik[20];
int z,c,a;
int b=1;

int main()
{
	// liczba porz¹dkowa w tabeli
	for (int i=1; i<=20; i++)
	{
		tab [i][0]=i;
	}
	
	cout << "Ile punktow chcesz umiescic na ukladzie wspolrzednych? (max. 20)" << endl;
	cin >> z;
	for (int i=1; i<=z; i++)
	{
		cout << "Podaj wartosc X " << i << " punktu: ";
		cin >> tab[i][1];
		cout << "Podaj wartosc Y " << i << " punktu: ";
		cin >> tab[i][2];
	}
	cout << endl << "Podaj ilosc punktow K (max. 5): ";
	cin >> c;
	for (int i=1; i<=c;i++)
	{
		cout << "Podaj punkt ktory ma byc " << i << " punktem K: ";
		cin >> a;
		tab[a][3]=b;
		b++;
	}

// mierzenie odleglosci od punktu K1
	for (int x=1; x<=z; x++)
	{
		if (tab[x][3] == 1)
		{
			for (int i=1; i<=z; i++) 
			{ 	
				tab1[i]=sqrt(((tab[i][1]-tab[x][1])*(tab[i][1]-tab[x][1]))+((tab[i][2]-tab[x][2])*(tab[i][2]-tab[x][2])));
			}
		}
	}
	
// mierzenie odleglosci od punktu K2	
	for (int x=1; x<=z; x++)
	{
		if (tab[x][3] == 2)
		{
			for (int i=1; i<=z; i++) 
			{ 	
				tab2[i]=sqrt(((tab[i][1]-tab[x][1])*(tab[i][1]-tab[x][1]))+((tab[i][2]-tab[x][2])*(tab[i][2]-tab[x][2])));
			}
		}
	}
// mierzenie odleglosci od punktu K3	
for (int x=1; x<=z; x++)
	{
		if (tab[x][3] == 3)
		{
			for (int i=1; i<=z; i++) 
			{ 	
				tab3[i]=sqrt(((tab[i][1]-tab[x][1])*(tab[i][1]-tab[x][1]))+((tab[i][2]-tab[x][2])*(tab[i][2]-tab[x][2])));
			}
		}
	}
	
// mierzenie odleglosci od punktu K4
	for (int x=1; x<=z; x++)
	{
		if (tab[x][3] == 4)
		{
			for (int i=1; i<=z; i++) 
			{ 	
				tab4[i]=sqrt(((tab[i][1]-tab[x][1])*(tab[i][1]-tab[x][1]))+((tab[i][2]-tab[x][2])*(tab[i][2]-tab[x][2])));
			}
		}
	}

// mierzenie odleglosci od punktu K5
	for (int x=1; x<=z; x++)
	{
		if (tab[x][3] == 5)
		{
			for (int i=1; i<=z; i++) 
			{ 	
				tab5[i]=sqrt(((tab[i][1]-tab[x][1])*(tab[i][1]-tab[x][1]))+((tab[i][2]-tab[x][2])*(tab[i][2]-tab[x][2])));
			}
		}
	}
	
	cout << tab1[0];

	int min = 10000000;
	for (int i=1; i<=z; i++)
	{
		if (tab1[i] < min && tab1[i] > 0) 
		{
			min=tab1[i];
			tabwynik[i]=1;	
		}
		if (tab2[i] < min && tab2[i] > 0) 
		{
			min=tab2[i];
			tabwynik[i]=2;
		}
		if (tab3[i] < min && tab3[i] > 0) 
		{		
			min=tab3[i];
			tabwynik[i]=3;
		}
		if (tab4[i] < min && tab4[i] > 0) 
		{
			min=tab4[i];
			tabwynik[i]=4;
		}
		if (tab5[i] < min && tab5[i] > 0) 
		{
			min=tab5[i];
			tabwynik[i]=5;
		}
	}
	for (int i=1; i<z; i++)
	{
		if (tabwynik[i]==1)
		{
			cout << endl << "Punkt " << i << " o wspolrzednych (" << tab[i][1] << "," << tab[i][2] << ") nalezy do zbioru K1";
		}
		if (tabwynik[i]==2)
		{
			cout << endl << "Punkt " << i << " o wspolrzednych (" << tab[i][1] << "," << tab[i][2] << ") nalezy do zbioru K2";
		}
		if (tabwynik[i]==3)
		{
			cout << endl << "Punkt " << i << " o wspolrzednych (" << tab[i][1] << "," << tab[i][2] << ") nalezy do zbioru K3";
		}
		if (tabwynik[i]==4)
		{
			cout << endl << "Punkt " << i << " o wspolrzednych (" << tab[i][1] << "," << tab[i][2] << ") nalezy do zbioru K4";
		}
		if (tabwynik[i]==5)
		{
			cout << endl << "Punkt " << i << " o wspolrzednych (" << tab[i][1] << "," << tab[i][2] << ") nalezy do zbioru K5";
		}
	}

	

	getch();
	return 0;
}
