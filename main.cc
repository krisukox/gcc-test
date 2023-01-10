#include <cstring>
#include <iostream>
#include "first.h"
#include "second.h"

int main()
{
  if (first() == second())
  {
    std::cout << "eq\n";
  }
  else
  {
    std::cout << "NOT eq\n";
  }

  if (strcmp(first(), second()) == 0)
  {
    std::cout << "eq\n";
  }
  else
  {
    std::cout << "NOT eq\n";
  }
}
