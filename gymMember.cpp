#include "gymMember.h"
#include <iostream>
using namespace std;

// Constructors
gymMember::gymMember(int id, std::string name, std::string pass){
    memberId = id;
    memberName = name;
    weightKg = 0.0;
    PaidStatus = false; // Fixed: Use = instead of ==
    password = pass;
    memberPlan = workoutPlan(); // Assign default workout settings
}

gymMember::gymMember(int id, std::string name, double weight, bool PaidorNot, std::string pass, workoutPlan plan){
    memberId = id;
    memberName = name;
    weightKg = weight;
    PaidStatus = PaidorNot; // Fixed: Use = instead of ==
    password = pass; 
    memberPlan = plan;     // Fixed: Removed local type recreation
}

// Destructor
gymMember::~gymMember(){
 cout << "*SYSTEM*: Profile for: " << memberName << " " << memberId << " has been removed from memory\n";
}

// Getters
int gymMember::getMemberId(){
    return memberId;
}
double gymMember::getWeight(){
    return weightKg;
}
bool gymMember::ifPaid(){
    return PaidStatus;
}
workoutPlan gymMember::getmemberplan(){
    return memberPlan;
}

// Setters
void gymMember::setWeight(double weight){
    if(weight > 30.0 && weight < 300.0){
        weightKg = weight;
        cout << "Weight changed successfully\n";
    } else {
        cout << "Invalid weight.\n";
    }
}

void gymMember::setPaid(){
    if (PaidStatus == true) {
        cout << "Notice: member has already paid their monthly dues.\n";
    } else {
        PaidStatus = true;
        cout << "Payment successful!!! Monthly dues have been marked as paid..\n";
    }
}

void gymMember::setPass(std::string pass){
    if (pass.length() != 8) {
        cout << "ERROR. Enter a password with a length of 8 characters.\n";
    } else {
        password = pass;
        cout << "Password changed successfully.\n";
    }
}

void gymMember::setPlan(workoutPlan plan){ // Fixed: Now correctly contained inside the file boundary
    memberPlan = plan;
}