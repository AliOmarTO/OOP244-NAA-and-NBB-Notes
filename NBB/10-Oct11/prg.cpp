#include <cstdio>
using namespace std;
class output {
public:
   output& print(int val) {
      printf("%d", val);
      return *this;
   }
   output& print(double val) {
      printf("%.2lf", val);
      return *this;
   }
   output& print(const char* val) {
      printf(val);
      return *this;
   }
};
int main() {
   output fout;
   int age = 35;
   double salary = 123456.45;
   fout.print("Hello I am a progammer, I am ").print(age).print(" year old and I am make ").print(salary).print(" Dollara a year!\n");
   return 0;
}