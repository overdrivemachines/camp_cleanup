#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  string line;
  while (!cin.eof()) {
    cin >> line;

    cout << line << endl;

    cin.get();   // reads in the new line character \n after the input (on the same line)
    cin.peek();  // reads first character of the next line
  }

  return 0;
}
