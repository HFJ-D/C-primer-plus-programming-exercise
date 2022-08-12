#include "dma.h"
const int CLIENTS = 4;
const int CHMAX = 30;

int main()
{
	ABC *p_dma [CLIENTS];
	char temp [CHMAX];
	int rate;
	char color [CHMAX];
	char style [CHMAX];
	int kind;


	for(int i = 0; i < CLIENTS; i++)
	{
		cout << "Enter the label: ";
		cin.getline(temp, CHMAX-1);
		cout << "Enter rate: ";
		cin >> rate;
		
		cout << "Enter 1 for baseDMA or enter 2 for lacksDMA or enter 3 for hasDMA: ";
		while(cin >> kind && (kind != 1 && kind != 2 && kind != 3))
			cout << "Enter either 1 or 2 or 3: ";
		while(cin.get() != '\n');
		switch(kind)
		{
			case 1: p_dma[i] = new baseDMA(temp, rate); break;
			case 2: cout << "Enter the color: ";
					cin.getline(color, CHMAX-1);
					p_dma[i] = new lacksDMA(color, temp, rate); break;
			case 3: cout << "Enter the style: ";
					cin.getline(style, CHMAX-1);
					p_dma[i] = new hasDMA(style, temp, rate);
		}
		
	}
	cout << endl;

	for(int i = 0; i < CLIENTS; i++)
	{
			p_dma[i]->View();
			cout << endl;
	}

	for(int i = 0; i < CLIENTS; i++)
		delete p_dma[i];


	return 0;
}