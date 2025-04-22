#include <studio.h>
#include <assert.h>

void testar(){
  //função de teste simples
  assert(1==1); // verificar ser 1 é igual a 1
  printf("teste passou!\n");
}

int main(){
  testar();
  return 0;
}
