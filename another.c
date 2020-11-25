another file from tutorial

#include <iostream>

int main() {
  int num;
  std::cin>>num;
  
  int sum = 0;
  for(int i=1; i<=num; i++)
    sum += i;
    
  std::cout<<sum<<"\n";
  
  return 0;
  
  }
  
