#include <iostream>
#include <math.h>
using std::cout;
using std::cin;
using std::endl;

int getFactorial(int num){
  if (num == 1 || num == 0)
  {
    return 1;
  }
  else
  {
    return num*getFactorial(num-1);
  }
}
float euler_calc(float par){
  float num = 0.0, result=0.0;
  do{
    result += 1.0/(getFactorial(num));
    num = num + 1;
  } while(num <= par);
  return result;
}

int main(){
  float par, result, num=0.0;
  cout << "Give me the parameter " << endl;
  cin >> par;
  cout << "The answer is " << euler_calc(par) << endl;
}
