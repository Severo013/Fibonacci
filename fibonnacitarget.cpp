#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
	//declaracao das variaveis necessarias
	int i=0, n1=0, n2=1, aux, numinfo;
	string pertence = "O numero informado pertence a sequencia";
	
	//usuario insere o numero que deseja verificar
	cout << "Informe um numero: ";
	cin >> numinfo;
	
	//comeco do calculo para definir a sequencia de fibonacci
	//o calculo consiste em conseguir o proximo numero da sequencia somando os dois anteriores, comecando por 0 e 1
	//a variavel i define o numero de vezes que a soma sera feita, nesse caso 10
	cout<<n1<<"\n"<<n2<<"\n";
	while(i<10){
		aux=n2;
		n2+=n1;
		n1=aux;
		cout<<n2<<"\n";
		i++;
	}
	//depois que a sequencia foi montada, esse switch define os casos que serao definidos como pertencentes a sequencia
	switch (numinfo){
		case 0:
			cout << pertence << "\n"; break;
		case 1:
			cout << pertence << "\n"; break;
		case 2:
			cout << pertence << "\n"; break;
		case 3:
			cout << pertence << "\n"; break;
		case 5:
			cout << pertence << "\n"; break;
		case 8:
			cout << pertence << "\n"; break;
		case 13:
			cout << pertence << "\n"; break;
		case 21:
			cout << pertence << "\n"; break;
		case 34:
			cout << pertence << "\n"; break;
		case 55:
			cout << pertence << "\n"; break;
		case 89:
			cout << pertence << "\n"; break;
	
	//o default significa que o numero informado nao pertence a sequencia
		 default:
			cout << "\n" << "O numero " << numinfo << " nao pertence a sequencia" << "\n"; break;
	}
	//pausa para o programa nao fechar automaticamente
	system("pause");
	return 0;
	
	}
