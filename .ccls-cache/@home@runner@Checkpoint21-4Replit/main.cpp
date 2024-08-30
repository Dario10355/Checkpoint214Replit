/* Program File Name: Checkpoinnt2.14
   Programmer: Darius Mason
   Date: August 2024
   Requierments:
   Write a program that has the following character      
   variables: first, middle, and last. Store your initals
   in these variables the display them on the screen.
*/

#include<iostream>
#include <string>



int main()
{
   char firstInitial;
   char middleInitial;
   char lastInitial;
   std::string firstName;

   std::cout << "Please enter the initial of your name:";
   std::cin >> firstInitial;
   std::cout << "Please enter the initial of your middle name:";
   std::cin >> middleInitial;
   std::cout << "Please enter the initial of your last name:";
   std::cin >> lastInitial;
   std::cout << "Your initials are: " << firstInitial <<middleInitial << lastInitial;
   std::cout << "Please enter your first name:";
   std::cin>>firstName;
   std::cout <<"Welcome "<<firstName;

   

}