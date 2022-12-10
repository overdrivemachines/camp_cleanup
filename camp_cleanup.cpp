#include <iostream>

using namespace std;

struct Range {
  int start;
  int end;
};

bool isSubset(Range r1, Range r2);
Range interpretRange(string s);

int main(int argc, char const *argv[]) {
  string line, section_elf1, section_elf2;
  int comma_pos;
  Range r1, r2;

  while (!cin.eof()) {
    cin >> line;

    comma_pos = line.find(",");

    // get elf1's section from the input
    section_elf1 = line.substr(0, comma_pos);

    // get elf2's section from the input
    section_elf2 = line.substr(comma_pos + 1, line.length() - comma_pos);

    cout << section_elf1 << " : " << section_elf2 << endl;

    cin.get();   // reads in the new line character \n after the input (on the same line)
    cin.peek();  // reads first character of the next line
  }

  return 0;
}

// Is range r1 a subset of range r2?
// Is range r2 a subset of range r1?
bool isSubset(Range r1, Range r2) {
  if (r1.start <= r2.start) {
    if (r1.end >= r2.end)
      return true;
  } else {
    // r2.start is less than r1.start
    if (r2.end >= r1.end)
      return true;
  }
  return false;
}

Range interpretRange(string s) {
}
