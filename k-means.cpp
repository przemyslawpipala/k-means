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
int z,c,a;
int k1,k2,k3,k4,k5;
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

/*for (int i=1;i<=z;i++)
{
	cout << tab[i][3];
}
*/


// mierzenie odleglosci od punktu K1
	for (int x=1; x<=z; x++)
	{
		if (tab[x][3] == 1)
		{
			for (int i=1; i<=z; i++) 
			{ 
				for (int j=1; j<=z; j++) 
				{
					tab1[i]=sqrt(((tab[j][1]-tab[i][1])*(tab[j][1]-tab[i][1]))+((tab[j][2]-tab[i][2])*(tab[j][2]-tab[i][2])));
				}
			}
		//	cout << x << " ";
		}
	}
	
// mierzenie odleglosci od punktu K2	
	for (int x=1; x<=z; x++)
	{
		if (tab[x][3] == 2)
		{
			for (int i=1; i<=z; i++) 
			{ 
				for (int j=1; j<=z; j++) 
				{
					tab2[i]=sqrt(((tab[j][1]-tab[i][1])*(tab[j][1]-tab[i][1]))+((tab[j][2]-tab[i][2])*(tab[j][2]-tab[i][2])));
				}
			}
		//	cout << x << " ";
		}
	}

// mierzenie odleglosci od punktu K3	
	for (int x=1; x<=z; x++)
	{
		if (tab[x][3] == 3)
		{
			for (int i=1; i<=z; i++) 
			{ 
				for (int j=1; j<=z; j++) 
				{
					tab3[i]=sqrt(((tab[j][1]-tab[i][1])*(tab[j][1]-tab[i][1]))+((tab[j][2]-tab[i][2])*(tab[j][2]-tab[i][2])));
				}
			}
		//	cout << x << " ";
		}
	}
	
// mierzenie odleglosci od punktu K4
	for (int x=1; x<=z; x++)
	{
		if (tab[x][3] == 4)
		{
			for (int i=1; i<=z; i++) 
			{ 
				for (int j=1; j<=z; j++) 
				{
					tab4[i]=sqrt(((tab[j][1]-tab[i][1])*(tab[j][1]-tab[i][1]))+((tab[j][2]-tab[i][2])*(tab[j][2]-tab[i][2])));
				}
			}
		//	cout << x << " ";
		}
	}

// mierzenie odleglosci od punktu K5
	for (int x=1; x<=z; x++)
	{
		if (tab[x][3] == 5)
		{
			for (int i=1; i<=z; i++) 
			{ 
				for (int j=1; j<=z; j++) 
				{
					tab5[i]=sqrt(((tab[j][1]-tab[i][1])*(tab[j][1]-tab[i][1]))+((tab[j][2]-tab[i][2])*(tab[j][2]-tab[i][2])));
				}
			}
		//	cout << x << " ";
		}
	}
	
	cout << tab1[0];
/*	for (int i=1; i<=z; i++)
	{
		if (tab1[i]<tab2[i]) tabk1[i]=tab1[i];
		else tabk1[i] = tab2[i]
	}
	
	*/

	for (int i=0; i<=z-1; i++)
	{
		cout << tab1[i] << endl;
	}
/*		for (int i=1; i<=z; i++)
	{
		cout << tab2[i] << endl;
	}
		for (int i=1; i<=z; i++)
	{
		cout << tab3[i] << endl;
	}
		for (int i=1; i<=z; i++)
	{
		cout << tab4[i] << endl;
	}
		for (int i=1; i<=z; i++)
	{
		cout << tab5[i] << endl;
	}
*/
	getch();
	return 0;
}
