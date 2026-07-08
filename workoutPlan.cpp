#include "workoutPlan.h"
#include <iostream>
using namespace std;

//constructors

workoutPlan::workoutPlan(){
   planName = "Cardio";
   sessions = 4;
   difficulty = "Beginner";     
}

workoutPlan::workoutPlan(std::string NameofPlan, int NumofSessions, std::string LevelofDifficulty){
    planName = NameofPlan;
    sessions = NumofSessions;
    difficulty = LevelofDifficulty;
}

// getters


std::string workoutPlan::getPlanName(){
    return planName;
}
int workoutPlan::getSessions(){
    return sessions;
}
std::string workoutPlan::getDifficulty(){
    return difficulty;
}

//setters
void workoutPlan::setPlanName(std::string Name){
    planName = Name;
}
void workoutPlan::setSessions(int session){
    sessions = session;
}
void workoutPlan::setDifficulty(std::string DifficultyLevel){
    difficulty = DifficultyLevel;
}
