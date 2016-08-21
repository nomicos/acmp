#include <iostream>
#include <string>
#include <limits>
#include <cmath>

using namespace std;

int main()
{
    const int distance = 650;

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string fastestTrainName = "";
    int fastestTrainTime = 24*60 + 1;

    for(int i = 0; i < n; ++i)
    {
        string trainName;
        cin.get(); // Ignore the first quote.
        char c;
        while((c = getchar()) && (c != '\"'))
            trainName += c;

        int depH, depM, arrH, arrM;

        cin >> depH;
        cin.get();
        cin >> depM;

        cin >> arrH;
        cin.get();
        cin >> arrM;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int depTime = depH * 60 + depM;
        int arrTime = arrH * 60 + arrM;

        int trainTime;
        if(depTime < arrTime)
            trainTime = arrTime - depTime;
        else
            trainTime = 24*60 - depTime + arrTime;

        if(trainTime < fastestTrainTime)
        {
            fastestTrainName = trainName;
            fastestTrainTime = trainTime;
        }
    }

    cout << "The fastest train is \"" << fastestTrainName << "\".\n"
         << "It\'s speed is "
         << round(distance / (static_cast<double>(fastestTrainTime) / 60.0))
         << " km/h, approximately.";

    return 0;
}
