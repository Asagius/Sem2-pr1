#include <iostream>

using namespace std;

int main() {
    string name, surname, pseudonym;
    cout << "Write name:" << endl;
    cin >> name;
    cout << "Write surname:" << endl;
    cin >> surname;
    cout << "Write pseudonym:" << endl;
    cin >> pseudonym;
    cout << "Output:" << endl;
    cout << name << ' ' << surname << " \"" << pseudonym << "\"" << endl;
    return 0;
}
