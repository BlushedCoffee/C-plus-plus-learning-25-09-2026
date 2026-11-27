
#include <iostream>
int main(){
setlocale(LC_ALL, "RU");
float num1,num2;
char math;
std::cout << "Type first number\n";
std::cin >> num1;
std::cout << "Type type of operation( +, -, *, /,\n";
std::cin >> math;
std::cout << "Type second number\n";
std::cin >> num2;
switch(math){
case '+':
  std::cout << "It is:  " << num1+num2 << '\n';
  break;
case '-':
  std::cout << "It is:  " << num1-num2 << '\n';
break;
case '*':
  std::cout << "It is:  " << num1*num2 << '\n';
break;
case '/':
if (num2 !=0){
  std::cout << "It is:  " << num1/num2 << '\n';
}
else {
  std::cout << "Fuck you\n";
}
break;
default:
std::cout << "What is it bradar\n";
break;
}
return 0;
}
