#include <bits/stdc++.h>
#include "src/RubiksCube3DArray.cpp"
#include "include/RubiksCubeDfsSolver.h"

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

  vector<GenericRubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(6);
    for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    cout << "\n";
    cube.print();

    DFSSolver<RubiksCube3dArray, Hash3d> dfsSolver(cube, 8);
    vector<GenericRubiksCube::MOVE> solve_moves = dfsSolver.solve();

    for (auto move: solve_moves) cout << cube.getMove(move) << " ";
    cout << "\n";
    dfsSolver.rubiksCube.print();

  return 0;

}
