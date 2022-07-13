#include <iostream>
using namespace std;
int main() {
  float n[4], nota;
  float soma = 0;
  float media;

    for(int i = 0; i < 4; i++){
      cout << "Digite as quartro notas: ";
      cin >> nota;
      n[i] = nota;
      cout << i + 1 << "ª nota: " << nota << endl;
      soma = soma + nota;
    }
    cout << "Média: " << soma/4 << endl;
  
}