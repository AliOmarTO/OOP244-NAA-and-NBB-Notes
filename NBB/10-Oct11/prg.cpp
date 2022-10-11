#include <cstdio>
using namespace std;
class output {
public:
   void print(int val) {
      printf("%d", val);
   }
   void print(double val) {
      printf("%.2lf", val);
   }
   void print(const char* val) {
      printf(val);
   }
};
int main() {
   output fout;
   int age = 35;
   double salary = 123456.45;
   fout.print("Hello I am a progammer, I am ");
   fout.print(age);
   fout.print(" year old and I am make ");
   fout.print(salary);
   fout.print(" Dollara a year!\n");
   return 0;
}