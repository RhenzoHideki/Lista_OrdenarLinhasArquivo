// implemente aqui seu programa ...

#include <iostream>
#include <list>
#include <fstream>
//Declaração das bibliotecas

using namespace std;

int main(int argc , char *argv[]){
   if (argv[1]=NULL) {
        cout << "Nenhum arquivo foi passado" ;
        return 0;
    }

    //declação de variaveis
    list<string> lista; //Lista usada para ordenar as linhas do arquivo
    string line;//string usada para ler o arquivo
    string arquivo= argv[1];

    //Abertura do arquivo
    ifstream arq(arquivo);

    //Caso não abir
    if (!arq.is_open()){
      cout << "Não foi possivel abrir";
      return 0;
    }


    while (getline(arq,line)){
        lista.push_back(line); //Jogando as linhas para a lista
    }
    lista.sort(); //Organizando as linhas
    for (auto & it:lista) {
        cout << it <<endl ;
    }

    return 0;
}