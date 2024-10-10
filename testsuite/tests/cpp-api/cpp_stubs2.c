#include <iostream>

extern "C" {

#include "all-includes.h"

value test_cpp2(value v)
{
  CAMLparam1(v);

  std::cout << "In test C++ 2, v = " << Int_val(v) << std::endl;
  std::flush(std::cout);

  CAMLreturn (Val_unit);
}

}
