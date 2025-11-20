// Name: Aryan Lakhani
// Class (CECS 325-01)
// Project Name (Prog 3 – Sort contest)
// Due Date (10/9/2005)
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        cout << "Usage: generate COUNT MIN MAX" << endl;
        return 1;
    }

    int count = atoi(argv[1]);
    int minVal = atoi(argv[2]);
    int maxVal = atoi(argv[3]);

    ofstream outFile("numbers.dat");
    if (!outFile)
    {
        cout << "Error: could not open file for writing." << endl;
        return 1;
    }

    srand(time(0));

    for (int i = 0; i < count; i++)
    {
        int num = minVal + rand() % (maxVal - minVal + 1);
        outFile << num << endl;
    }

    outFile.close();

    cout << "Generated " << count << " numbers between "
         << minVal << " and " << maxVal << " in numbers.dat" << endl;

    return 0;
}
