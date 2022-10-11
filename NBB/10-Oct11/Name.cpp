#include <iostream>
#include "Name.h"
#include "Utils.h"
using namespace std;
namespace sdds {

   Name::Name(const char* value) {
      if (value) {
         m_value = new char[strlen(value) + 1];
         strcpy(m_value, value);
      }
   }
   void Name::allocateAndCopy(const char* value) {
      if (value != nullptr) {
         m_value = new char[strlen(value) + 1];
         strcpy(m_value, value);
      }
   }
   Name::Name(const Name& A) {
      allocateAndCopy(A.m_value);
   }
   Name& Name::operator=(const Name& A) {
      if (this != &A) {
         delete[] m_value;
         m_value = nullptr; // putting this object into a safe emtpy state
         allocateAndCopy(A.m_value);
      }
      return *this;
   }
   Name::~Name() {
      delete[] m_value;
   }
   std::ostream& Name::display(std::ostream& coutRef) {
      if (m_value) {
         coutRef << m_value;
      }
      return coutRef;
   }
}
