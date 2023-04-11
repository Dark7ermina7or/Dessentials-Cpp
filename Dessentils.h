#ifndef DESSENTIALS_H
#define DESSENTIALS_H

#include <string>
#include <vector>

class InputValidator {
private:
    static int validateInt();
    static double validateDouble();
    static std::string validateString();
    static bool validateBool();
    static char validateChar();

public:
    static int getInt();
    static double getDouble();
    static std::string getString();
    static bool getBool();
    static char getChar();
};

class Statistics {
public:
    Statistics(const std::vector<int>& values);
    [[nodiscard]] int sum() const;
    [[nodiscard]] double average() const;
    [[nodiscard]] int min() const;
    [[nodiscard]] int max() const;
    [[nodiscard]] double median() const;

    Statistics(const std::vector<std::string>& values);
    [[nodiscard]] std::string shortest() const;
    [[nodiscard]] std::string longest() const;

private:
    std::vector<int> values_num;
    std::vector<std::string> values_str;
};
#endif //DESSENTIALS_H
