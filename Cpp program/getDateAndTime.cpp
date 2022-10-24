#include <iostream>
#include <ctime>
using namespace std;

int main() 
{
   // current date and time in current system
   time_t current_dt = time(0);

   // convert date time to string format
   char* result = ctime(&current_dt);

   cout << "The current date and time is:\n" << result << endl;
}
