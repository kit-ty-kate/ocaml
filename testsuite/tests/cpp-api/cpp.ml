(* TEST
   modules = "cpp_stubs1.cpp cpp_stubs2.cpp"
   flags = "-cc c++"
*)

external test1 : int -> unit = "test_cpp1"
external test2 : int -> unit = "test_cpp2"

let () =
  test1 2;
  test2 6;
  print_endline "C++ api tests succeeded"
