#include <iostream>
using namespace std;

string reverseWord(string str){
    
  //M1
//   string rev = "";
//   for (int i = str.length()-1; i >= 0; --i) {
//       rev += str[i];
//   }
  
  //M2
  int temp;
  for (int i = str.length()-1, j = 0; i >= (str.length()/2)-1; --i, ++j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
  }
  return str;
}

int main() {
    cout << endl << reverseWord("aayushsaini@Aayushs-Air cpp-practice-question % git commit -m '[New Implementation]Sum of numbers in string'");
}