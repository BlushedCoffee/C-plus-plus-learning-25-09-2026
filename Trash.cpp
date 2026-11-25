#include <iostream>
#include <cstdlib>

int main() {
    int result = system("sudo nix-collect-garbage -d");
    
    if (result == 0) {
        std::cout << "Garbage collected\n";
    } 
    else {
      std::cout << "The error has occurred (code: " << result << ") \n";
    }

    return 0;
}

