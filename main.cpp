#include <iostream>
#include <locale>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
	int n;
    setlocale(LC_ALL, "portuguese");
	cout << ("Coloque O Número De Alunos: \n");
	cin >> n;
    double medias[n];
    string Nameall[n];

        for(int i=0; i<n; ++i){
        double nota1, nota2, media;
        string nomealuno;
        cout << "Insira O Nome Do " << i+1 <<"º Aluno(a):" << endl;
        cin >> nomealuno;
        cout << "Digite as notas de " << nomealuno << "\n" <<endl;
        cout << ("Coloque a Primeira Nota. \n");
        cin >> nota1;
        cout << ("Coloque a Segunda Nota. \n");
        cin >> nota2;
        media = (nota1+nota2)/2;
        cout << "A Média das Notas é:\n" << media << endl;
        cout << ("\n \n");
        medias[i]=media;
        Nameall[i] = nomealuno;

    }

    for (int i=0; i<n; i++)
    {
        for (int y=i+1; y<n; y++)
            {
                if (medias[i]<medias[y])
                    {
                        double valor = medias[i];
                        medias[i] = medias[y];
                        medias[y] = valor;

                        string nome_aluno = Nameall[i];
                        Nameall[i] = Nameall[y];
                        Nameall[y] = nome_aluno;
                    }
            }
    }
    cout << ("A Ordem Das Notas é: \n");
    for (int i=0; i<n; i++){
        cout << i+1 << "º Lugar - "<< Nameall[i] << " Com Média de: " << medias[i]  << endl;}

    system("pause");
    return 0;
}
