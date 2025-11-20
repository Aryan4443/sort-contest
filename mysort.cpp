// Name: Aryan Lakhani
// Class (CECS 325-01)
// Project Name (Prog 3 – Sort contest)
// Due Date (10/9/2005)
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void bubble(vector<int> &v)
{
    int n = v.size();
    bool swapped;

    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        cout << "Usage: mysort inputfile outputfile" << endl;
        return 1;
    }

    string inputFile = argv[1];
    string outputFile = argv[2];
    vector<int> nums;

    ifstream in(inputFile);
    if (!in)
    {
        cout << "Error: cannot open input file." << endl;
        return 1;
    }

    int num;
    while (in >> num)
    {
        nums.push_back(num);
    }
    in.close();

    cout << "Starting bubble sort with " << nums.size() << " items..." << endl;
    bubble(nums);
    cout << "Bubble sort complete." << endl;

    ofstream out(outputFile);
    for (int i = 0; i < (int)nums.size(); i++)
    {
        out << nums[i] << endl;
    }
    out.close();

    cout << "Sorted numbers written to " << outputFile << endl;
    return 0;
}
