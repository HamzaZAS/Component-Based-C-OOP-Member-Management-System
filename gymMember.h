#pragma once
#include <iostream>
#include <string>
#include "workoutPlan.h"

class gymMember
{
    private:
    int memberId;
    double weightKg;
    bool PaidStatus;
    std::string password;
    workoutPlan memberPlan;

    public:
    std::string memberName;

    gymMember(int id, std::string name, std::string pass);
    gymMember(int id, std::string name, double weight, bool PaidorNot, std::string pass, workoutPlan plan); // Changed type from string to workoutPlan

    ~gymMember();
   
    int getMemberId();
    double getWeight();
    bool ifPaid();
    workoutPlan getmemberplan();

    void setWeight(double weight);
    void setPaid();
    void setPass(std::string pass);
    void setPlan(workoutPlan plan);
};