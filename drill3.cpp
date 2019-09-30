#include "std_lib_facilities.h"
using namespace std;
int main ()
{
std::cout << "Enter the name of the person you want to write to\n";
string first_name {" "};
std::cin >> first_name;

std::cout << "Dear " <<first_name<<",\n";
std::cout << "How are you? I am fine. I miss you.\n";

std::cout << "Enter the name of a mutual friend:\n";
string friend_name {" "};
std::cin  >> friend_name;

std::cout << "Enter friend's sex (m for male, f for female): ";
char friend_sex {0};
std::cin >> friend_sex;
std::cout << "Have you seen " << friend_name << " lately?\n";
if (friend_sex == 'm')
std::cout << "If you see " << friend_name << " please ask him to call me.\n";
if (friend_sex == 'f')
std::cout << "If you see " << friend_name << "please ask her.\n";

std::cout << "Enter the age of this person: \n";
int age {0};
std::cin >> age;
if (age <= 0 || age >= 110)
simple_error("you're kidding!");

std::cout << "I haer you just had a birthday party and you are "<< age << " years old.\n";
if (age < 12)
std::cout << "Next year you will be " << age+1 << ".\n";
if (age == 17)
std::cout << "Next year you will be able to vote.\n";
if (age > 70)
std::cout << "I hope you are enjoying retirement.\n";

std::cout << "Your sincerely,\n";
std::cout <<"\n\n Kata\n";
return 0;
}
