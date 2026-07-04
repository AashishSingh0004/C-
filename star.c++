
#include <iostream> 
using namespace std;

int main() {
    int rows = 4; 
    int columns = 4; 

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "* "; 
        }
        cout << endl; 
    }

    return 0;
}   

