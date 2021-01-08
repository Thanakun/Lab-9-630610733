#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int i = 0;
    double sum = 0.0;
    double sum1 = 0.0;
    long double mean = 0.0;
    long double standard = 0.0;
    string textline;
   
    ifstream score("score.txt");
    while(getline(score,textline)){


        sum += atof(textline.c_str());
        sum1 = sum1 + pow(atof(textline.c_str()),2);
        i++;
    }

    


    mean = (sum/i);
    standard = sqrt((sum1/i)-pow(mean,2));


    cout << "Number of data = " << i << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << standard << endl;
}