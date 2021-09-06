#pragma once

#ifndef BANK00_H_
#define BANK00_H_

#include <string>

class Bank
{
private:
    std::string name;
    int acc_num;
    double balance;
public:
    Bank(const std::string& name, int acc_num = NULL, double balance = 0.0);
    Bank();
    void show() const;
    void deposite(double dep_money);
    void withdraw(double with_money);
    ~Bank();
};

#endif