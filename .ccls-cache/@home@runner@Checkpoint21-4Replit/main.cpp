/* Program File Name: Checkpoinnt2.14
   Programmer: Darius Mason
   Date: August 2024
   Requierments:
   Write a program that has the following character      
   variables: first, middle, and last. Store your initals
   in these variables the display them on the screen.
*/

#include<iostream>




int main()
{
   char firstInitial;
   char middleInitial;
   char lastInitial;
   std::cout << "Please enter the initial of your name:";
   std::cin >> firstInitial;
   std::cout << "Please enter the initial of your middle name:";
   std::cin >> middleInitial;
   std::cout << "Please enter the initial of your last name:";
   std::cin >> lastInitial;
   std::cout << "Your initials are: " << firstInitial << middleInitial << lastInitial;

}