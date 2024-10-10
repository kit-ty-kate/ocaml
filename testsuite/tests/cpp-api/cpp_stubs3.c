#include <iostream>
#define CAML_INTERNALS
#include "all-includes.h"

extern "C" {

value test_cpp3(value v)
{
  CAMLparam1(v);

  std::cout << "In test C++ 3, v = " << Int_val(v) << std::endl;
  std::flush(std::cout);

  CAMLreturn (Val_unit);
}

}
