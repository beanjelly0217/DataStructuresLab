#include<iostream>
using namespace std;

int main() {
     int int_var = 12, *int_ptr;
     float float_val = 4.15, *float_ptr;

     /* Initialize pointers */

     int_ptr = &int_var;
     float_ptr = &float_val;

     cout<<"Address of int_var = "<< int_ptr<<endl;
     cout<<"Address of float_var = "<< float_ptr<<endl<<endl;

     /* Incrementing pointers */
     int_ptr++;
     float_ptr++;
     cout<<"After increment address in int_ptr = "<< int_ptr<<endl;
     cout<<"After increment address in float_ptr = "<< float_ptr<<endl<<endl;

     /* Adding 2 to pointers */
     int_ptr = int_ptr + 2;
     float_ptr = float_ptr + 2;

     cout<<"After addition address in int_ptr = "<< int_ptr<<endl;
     cout<<"After addition address in float_ptr = "<< float_ptr<<endl<<endl;


     /* Decrementing pointers */
     int_ptr--;
     float_ptr--;
     cout<<"After decrement address in int_ptr = "<< int_ptr<<endl;
     cout<<"After decrement address in float_ptr = "<< float_ptr<<endl<<endl;



     /* Subtract 2 to pointers */
     int_ptr = int_ptr - 1;
     float_ptr = float_ptr - 1;

     cout<<"After subtract address in int_ptr = "<< int_ptr<<endl;
     cout<<"After subtract address in float_ptr = "<< float_ptr<<endl<<endl;
     return 0;
}
