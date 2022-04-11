#include <iostream>

        #include <iomanip>

        using namespace std;

        void showDate(int m, int d, int y)

        {

            cout << setfill('0');

           cout << setw(2) << m << '/'

            << setw(2) << d << '/'

            << setw(4) << y << endl;

        }

        int main()

       {

           showDate(1, 1, 2020);

            return 0;
        }
