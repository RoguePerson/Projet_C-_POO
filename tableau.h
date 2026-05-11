#ifndef TABLEAU_H
#define TABLEAU_H

#include <vector>
#include <string>

std::string genererTableau(
    const std::vector<std::string>& banques,
    const std::vector<float>& taux,
    const std::vector<int>& durees,
    const std::vector<float>& mensualites
);

#endif
