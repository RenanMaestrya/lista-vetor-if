#include <iostream>
using namespace std;
int main() {
  int I[5], idade;
  float A[5], altura;

  for(int i = 0; i < 5; i++){
    cout << "Digite a idade da " << i + 1 << "ª pessoa: " << endl; 
    cin >> idade;
    I[i] = idade;
    cout << "Digite a altura da " << i + 1 << "ª pessoa: " << endl; 
    cin >> altura;
    A[i] = altura;
  }
  
  for(int j = 4; j > -1; j--){
  	cout << "idade da " << j + 1 << "ª pessoa: " << I[j] << endl;
  	cout << "altura da " << j + 1 << "ª pessoa: " << A[j] <<endl;
  }
  
  
}
