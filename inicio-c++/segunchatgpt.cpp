#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main()
{
    cout << "|" << setw(8) << "Length " << "|" << setw(8) << "Width " << "|" << setw(8) << "Depth " 
         << "|" << setw(12) << "Perimeter " << "|" << setw(10) << "Volume " << "|"
         << setw(28) << "Underground surface area " << "|" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;

    vector<int> L{25, 25, 25, 25, 30, 30, 30, 30};
    vector<int> W{10, 10, 10, 10, 12, 12, 12, 12};
    vector<float> D{5.0, 5.5, 6.0, 6.5, 5.0, 5.5, 6.0, 6.5};

    float avgDepth{0};
    for(int i=0; i < 8; i++){
        avgDepth += D[i];
    }
    avgDepth /= 8;

    for(int i=0; i < 8; i++){
        cout << "|" << setw(8) <<  L[i] << "|" << setw(8) << W[i] << "|" << setw(8)
             << D[i] << "|" << setw(12) << 2*(L[i]+W[i]) << "|" << setw(10) << L[i]*W[i]*avgDepth
             << "|" << setw(28) << 2*(L[i]+W[i])*avgDepth + L[i]*W[i] << "|" << endl;
    }
    cout << "-----------------------------------------------------------------------------" << endl;

    return 0;
}
