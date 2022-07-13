#include <iostream>
using namespace std;
int main() {
  int v[10];

  for(int i = 9; i > -1; i--){
     v[i] = i + 1;
    cout << v[i] << endl;
  }
  
}