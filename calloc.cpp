#include <iostream>
#include <stdlib.h>
using namespace std;

int main () {
   int i, n;
   int *a;

   cout<<"Number of elements to be entered:";
   cin>>n;

   a = (int*)calloc(n, sizeof(int));
   cout<<"Enter "<<n<< " numbers."<<endl;
   for( i=0 ; i < n ; i++ ) {
      cin>>a[i];
   }

   cout<<"The numbers entered are: ";
   for( i=0 ; i < n ; i++ ) {
      cout<<a[i]<<"\t";
   }
   //cout<<endl<<*a;
   free( a );
   //cout<<endl<<*a;
   return(0);
}
