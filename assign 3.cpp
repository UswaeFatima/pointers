#include <iostream>
using namespace std;

int main(){
	string food = "Pizza";
  string &meal = food;

  cout << food << "\n";
  cout << meal << "\n";
  
  int sum= 1550;
  int &div=sum;
  cout << sum << endl;
  cout << &div << endl;
  
    return 0;
}
