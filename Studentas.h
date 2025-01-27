// File: Studentas.h
#ifndef STUDENTAS_H
#define STUDENTAS_H

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <stdexcept>

class Studentas {
private:
    std::string vardas;
    std::string pavarde;
    std::vector<int> namuDarbai;
    int egzaminas;
    double galutinis;

public:
    // Constructors
    Studentas();
    Studentas(const std::string& v, const std::string& p, const std::vector<int>& nd, int egz);

    // Rule of three
    Studentas(const Studentas& other);
    Studentas& operator=(const Studentas& other);
    ~Studentas();

    // Methods
    void skaiciuotiGalutiniVidurki();
    void skaiciuotiGalutiniMediana();

    // Friends
    friend std::istream& operator>>(std::istream& in, Studentas& s);
    friend std::ostream& operator<<(std::ostream& out, const Studentas& s);
};

#endif
