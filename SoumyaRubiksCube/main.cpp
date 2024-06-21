#include <bits/stdc++.h>
#include "src/RubiksCube3DArray.cpp"

using namespace std;

int main() {

  RubiksCube3DArray object3DArray;
  object3DArray.print();

  if (object3DArray.isSolved()) cout << "SOLVED\n\n";
  else cout << "NOT SOLVED\n\n";

  object3DArray.u();
  object3DArray.print();

  object3DArray.l();
  object3DArray.print();

  if (object3DArray.isSolved()) cout << "SOLVED\n\n";
  else cout << "NOT SOLVED\n\n";

  return 0;

}
