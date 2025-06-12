#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]){
  std::cout << ".intel_syntax noprefix" << std::endl
	    << ".global main" << std::endl
	    << "main:" << std::endl
	    << "  mov rax, " << std::atoi(argv[1]) << std::endl
	    << "  add rax, " << std::atoi(argv[2]) << std::endl
	    << "  ret" << std::endl;
  return 0;
}
