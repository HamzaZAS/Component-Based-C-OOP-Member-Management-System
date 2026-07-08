#pragma once
#include <iostream>
#include <string>


class workoutPlan
{
    private:
    std::string planName;
    int sessions;
    std::string difficulty;

    public:
    //constructors
    workoutPlan();  
    workoutPlan(std::string NameofPlan, int NumofSessions, std::string LevelofDifficulty);
 

    // getters
    std::string getPlanName();
    int getSessions();
    std::string getDifficulty();

    //setters
    void setPlanName(std::string Name);
    void setSessions(int session);
    void setDifficulty(std::string DifficultyLevel);
};