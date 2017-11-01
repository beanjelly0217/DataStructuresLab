#include <stdlib.h>
#include <string.h>
#include<iostream>
using namespace std;

int main() {

   char name[100];
   char *description;

   strcpy(name, "Rahman");

   /* allocate memory dynamically */
   description = (char*) malloc(20* sizeof(char) );

   if( description == NULL ) {
      cout<<"Error - unable to allocate required memory" <<endl;
   }
   else {
      strcpy( description, "Rahman a Science student.");
   }

   cout<<"Name : "<<name<<endl;
   cout<<"Description: "<< description <<endl;
   return 0;
}
