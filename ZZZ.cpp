#include <iostream>

using namespace std;

int main() {
    char current1 = 0, current2 = 0, current3 = 0;
    int i1, i2, i3;
    char name[50], surname[50], pseudonym[50];

    cout << "Write name:" << endl;

    i1 = 0;

    while (current1 != '\n' && i1 < 50) {
        current1 = getchar();
        if (current1 == 'a' || current1 == 'e' || current1 == 'i' ||
            current1 == 'o' || current1 == 'u' || current1 == 'y')
            name[i1++] = 'z';
        else if (current1 == 'A' || current1 == 'E' || current1 == 'I' || current1 == 'O' || current1 == 'U' ||
                 current1 == 'Y')
            name[i1++] = 'Z';
        else
            name[i1++] = current1;
    }
    name[i1++] = '!';
    current2 = 0;
    cout << "Write surname:" << endl;

    i2 = 0;

    while (current2 != '\n' && i2 < 50) {
        current2 = getchar();
        if (current2 == 'a' || current2 == 'e' || current2 == 'i' ||
            current2 == 'o' || current2 == 'u' || current2 == 'y')
            surname[i2++] = 'z';
        else if (current2 == 'A' || current2 == 'E' || current2 == 'I' || current2 == 'O' || current2 == 'U' ||
                 current2 == 'Y')
            surname[i2++] = 'Z';
        else
            surname[i2++] = current2;
    }
    surname[i2++] = '!';
    cout << "Write pseudonym:" << endl;

    i3 = 0;

    while (current3 != '\n' && i3 < 50) {
        current3 = getchar();
        if (current3 == 'a' || current3 == 'e' || current3 == 'i' ||
            current3 == 'o' || current3 == 'u' || current3 == 'y')
            pseudonym[i3++] = 'z';
        else if (current3 == 'A' || current3 == 'E' || current3 == 'I' || current3 == 'O' || current3 == 'U' ||
                 current3 == 'Y')
            pseudonym[i3++] = 'Z';
        else
            pseudonym[i3++] = current3;
    }
    pseudonym[i3++] = '!';

    cout << "Output:" << endl;

    for (int i = 0; name[i] != '!';) {
        printf("%c", name[i++]);
    }

    printf(" \"");

    for (int k = 0; pseudonym[k] != '!';) {
        printf("%c", pseudonym[k++]);
    }

    printf("\" ");

    for (int j = 0; surname[j] != '!';) {
        printf("%c", surname[j]);
        j++;
    }

    return 0;
}
