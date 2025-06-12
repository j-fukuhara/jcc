#include <iostream>
#include <string>

int main(int argc, char* argv[]){
  std::string input = argv[1];
  auto iter = input.begin();
  
  std::cout << ".intel_syntax noprefix" << std::endl
	    << ".global main" << std::endl
	    << "main:" << std::endl;
  std::cout << "  mov rax, " << *iter << std::endl;
  while(++iter != input.end()){
    if(*iter == '+'){
      std::cout << "  add rax, " << *(++iter) << std::endl;
    } else if(*iter == '-'){
      std::cout << "  sub rax, " << *(++iter) << std::endl;
    }
  }
  std::cout << "  ret" << std::endl;
  return 0;
}
