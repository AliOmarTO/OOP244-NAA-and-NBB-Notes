#ifndef SDDS_CONTAINER_H_
#define SDDS_CONTAINER_H_
#include <iostream>
namespace sdds {
   class Container{
   private:
      int m_amount;
      int m_volume;
      char* m_content;
      void init();
      void clearup();
   public:
      Container(); // no argument constructor or default constructors

      Container(const char* content);
      Container(const char* content,
                int amount,
                int volume);



      ~Container();
      void set(const char* content, int amount, int volume = 220);
      bool isSafeEmpty()const;

      void setAmount(int value);
      std::ostream& display()const;
      void read();
   };
}
#endif

