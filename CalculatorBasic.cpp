#include <iostream>
using namespace std;
int add();
int min();
int mult();
float divi();

int main() {
//  int total = 0;
  int add(void); //加法function
  int min(void); //減法function
  int mult(void); //乘法function
  float divi(void); //除法function
  string way;

  cout << "請輸入運算符號:";
  cin >> way;

  if (way[1] != '\0') {
    cout << "運算符號無效!";
  } else if (way[0] == '+') {
    cout << add();
  } else if (way[0] == '-') {
    cout << min();
  } else if (way[0] == '*') {
    cout << mult();
  } else if (way[0] == '/') {
    cout << divi();
  } else {
    cout << "運算符號無效!";
  }

}

//加法function
int add(void) {
  int num = 0;
  int sum = 0;
  while (true){
    cout << "請輸入數字:";
    cin >> num;

  if (num == 0) {
      break;
  } 
  else {
      sum += num;
  }
  }

//回傳答案
  return sum;
}

//減法function
int min() {
  int num = 0;
  int sum = 0;
  while (true){
    cout << "請輸入數字:";
    cin >> num;

  if (num == 0) {
      break;
  }
  else {
      sum -= num;
  }
  }

  return sum;
}

//乘法function
int mult() {
  int num = 0;
  int sum = 1;
  while (true){
    cout << "請輸入數字:";
    cin >> num;

  if (num == 0) {
      break;
  }
  else {
      sum *= num;
  }
  }

  return sum;
}

//除法function
float divi() {
  float Ddend; //被除數 Dividend
  float Dsor; //除數 Divisor
  
  cout << "請輸入數字:";
  cin >> Ddend;
  if (Ddend == 0) {
    cout << "被除數不可為0!";
  }

  while (true) {
    cout << "請輸入數字:";
    cin >> Dsor;

  if (Dsor == 0) {
      break;
  }
  else {
      Ddend /= Dsor;
  }
  }

  return Ddend;
}
