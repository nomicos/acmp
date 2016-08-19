#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>

using namespace std;

const string sandbox = "sandbox.cpp";
const string categories[] = { "OK", "RTE", "TLE", "WA", "WIP" };

inline bool isTaskNumberOK(string n)
{
    return (stoi(n, nullptr) > 0 && stoi(n, nullptr) < 10000);
}

inline bool isCategoryOK(string cat)
{
    for(size_t i = 0; i < sizeof(categories)/sizeof(categories[0]); ++i)
        if(cat == categories[i])
            return true;
    return false;
}

int main(int argc, char *argv[])
{
    switch(argc)
    {
    case 1:
        cerr << "Not enough parameters. Provide the task number.\n";
        break;

    case 2:
        if(isTaskNumberOK(argv[1]))
        {
            string command;
            stringstream css(command);
            css << "copy " << sandbox << " \"src\\OK\\"
                << setw(4) << setfill('0') << argv[1];
            css << ".cpp\"";
            system(css.str().c_str());
        }
        break;

    case 3:
        if(isTaskNumberOK(argv[1]) && isCategoryOK(argv[2]))
        {
            string command;
            stringstream css(command);
            css << "copy " << sandbox << " \"src\\" << argv[2]
                << "\\" << setw(4) << setfill('0') << argv[1];
            css << " (" << argv[2] << ").cpp\"";
            system(css.str().c_str());
        }
        break;

    case 4:
        if(isTaskNumberOK(argv[1]) && isCategoryOK(argv[2]))
        {
            string command;
            stringstream css(command);
            css << "copy " << sandbox << " \"src\\" << argv[2]
                << "\\" << setw(4) << setfill('0') << argv[1];
            css << " (" << argv[2] << " " << argv[3] << ").cpp\"";
            system(css.str().c_str());
        }
        break;
    }
    return 0;
}
