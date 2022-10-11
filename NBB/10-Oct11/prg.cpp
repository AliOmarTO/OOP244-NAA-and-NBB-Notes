#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;
int main() {
   Name empty;
   Name fred = "Fred";
   fred = empty;

   return 0;
}