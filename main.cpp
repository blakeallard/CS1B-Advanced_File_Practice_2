#include <iostream>    // For cout
#include <fstream>     // For file operations

using namespace std;

int main()
{
    int  num = 459;
    ofstream fileOut("data.bin", ios::binary);


    fileOut.write(reinterpret_cast<char*>(&num), sizeof(num));
    fileOut.close();

    ifstream fileIn("data.bin", ios::binary);
    fileIn.read(reinterpret_cast<char*>(&num), sizeof(num));

    cout << num << endl;

    fileIn.close();


    return 0;
}
