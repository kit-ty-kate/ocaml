(* TEST
   modules = "cpp_stubs1.cpp"
   flags = "-cc c++"
*)

external test1 : int -> unit = "test_cpp1"

let () =
  test1 2;
  print_endline "C++ api tests succeeded"
