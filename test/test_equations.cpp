#include <iostream>
#include "../src/equations.h"

using namespace std;


int main(void) {
  cout << "fmodf(90.0, 360): " << fmodf(90.0, 360.0) << '\n';
  cout << "angle_to_int(90, 4096): " << angle_to_int(90.0, 4096) << '\n';
}

