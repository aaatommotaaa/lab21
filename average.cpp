#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int sum=0;
    if (argc>1){
        for (int i=0; i<argc; i++) {
            sum += atof(argv[i]);
        }
        int count = argc-1;
        double average = sum/count;
        cout << "---------------------------------\n";
        cout << "Average of " << count << " numbers = " << average << endl;
        cout << "---------------------------------\n";
    } else {
        cout << "Please input numbers to find average.";
    }

}
