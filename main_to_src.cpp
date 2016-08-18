#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>

using namespace std;

bool numberOK(int n)
{
    return (n > 0 && n < 10000);
}

int main(int argc, char *argv[])
{
    if(argc > 1 && numberOK(stoi(argv[1], nullptr)))
    {
        stringstream ss("");
        ss << setw(4) << setfill('0') << argv[1];
        ss << ".cpp";

        ifstream in("main.cpp");
        ofstream out(ss.str());

        string buffer;
        while(getline(in, buffer))
            out << buffer << endl;

        in.close();
        out.close();

        string command = "move ";
        command += ss.str();
        command += " src\\";
        system(command.c_str());
    }
    return 0;
}
