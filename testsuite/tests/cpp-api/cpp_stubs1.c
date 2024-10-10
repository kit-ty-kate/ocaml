#include <iostream>
#include "all-includes.h"

extern "C" {

value test_cpp1(value v)
{
  CAMLparam1(v);

  std::cout << "In test C++ 1, v = " << Int_val(v) << std::endl;
  std::flush(std::cout);

  CAMLreturn (Val_unit);
}

}
