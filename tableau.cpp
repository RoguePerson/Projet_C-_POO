#include "tableau.h"
#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

string repeat(char c, int n) {
    string result = "";
    for (int i = 0; i < n; i++) result += c;
    return result;
}

string centerText(string text, int width) {
    int length = text.size();
    if (length >= width) return text;

    int spacesTotal = width - length;
    int spacesLeft = spacesTotal / 2;
    int spacesRight = spacesTotal - spacesLeft;

    return string(spacesLeft, ' ') + text + string(spacesRight, ' ');
}

string cleanNumber(double value) {
    value = round(value * 100) / 100;
    string s = to_string(value);
    while (s.size() > 0 && s.back() == '0') {
        s.pop_back();
    }
    
    if (s.size() > 0 && s.back() == '.') {
        s.pop_back();
    }
    return s;
}


string genererTableau(
    const vector<string>& banques,
    const vector<float>& taux,
    const vector<int>& durees,
    const vector<float>& mensualites
) {
    int colWidth = 15;
    int nbBanques = banques.size();
    int nbTaux = taux.size();
    int nbDurees = durees.size();

    string tableauFinal = "";

    tableauFinal += " " + repeat('_', (nbBanques + 1) * (colWidth + 1)) + "\n";

    tableauFinal += "|" + centerText("Banque", colWidth);
    for (auto& b : banques)
        tableauFinal += "|" + centerText(b, colWidth);
    tableauFinal += "|\n";

    tableauFinal += "|" + repeat('_', colWidth);
    for (int i = 0; i < nbBanques; i++)
        tableauFinal += "|" + repeat('_', colWidth);
    tableauFinal += "|\n";

    int indexMens = 0;

    for (int t = 0; t < nbTaux; t++) {
        for (int d = 0; d < nbDurees; d++) {

            string texteTaux = "Taux " + cleanNumber(taux[t]);
            tableauFinal += "|" + centerText(texteTaux, colWidth);

            for (int b = 0; b < nbBanques; b++)
                tableauFinal += "|" + centerText(cleanNumber(taux[t]), colWidth);
            tableauFinal += "|\n";

            tableauFinal += "|" + repeat('_', colWidth);
            for (int i = 0; i < nbBanques; i++)
                tableauFinal += "|" + repeat('_', colWidth);
            tableauFinal += "|\n";

            string texteDuree = "Duree " + to_string(durees[d]);
            tableauFinal += "|" + centerText(texteDuree, colWidth);

            for (int b = 0; b < nbBanques; b++)
                tableauFinal += "|" + centerText(to_string(durees[d]), colWidth);
            tableauFinal += "|\n";

            tableauFinal += "|" + repeat('_', colWidth);
            for (int i = 0; i < nbBanques; i++)
                tableauFinal += "|" + repeat('_', colWidth);
            tableauFinal += "|\n";

            tableauFinal += "|" + centerText("Mensualité", colWidth);

            for (int b = 0; b < nbBanques; b++) {
                string m = cleanNumber(mensualites[indexMens]);
                tableauFinal += "|" + centerText(m, colWidth);
            }
            tableauFinal += "|\n";

            tableauFinal += "|" + repeat('_', colWidth);
            for (int i = 0; i < nbBanques; i++)
                tableauFinal += "|" + repeat('_', colWidth);
            tableauFinal += "|\n";

            indexMens++;
        }
    }

    return tableauFinal;
}
