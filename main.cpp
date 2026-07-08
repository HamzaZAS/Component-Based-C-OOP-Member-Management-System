#include <iostream>
#include <string>
#include "gymMember.h"
using namespace std;

int main(){
    int id; string name; string password; double weight;
    int choice;

    cout << "========== WELCOME TO GYM MANAGEMENT SYSTEM ==========\n";
    cout << "Enter member name to register: ";
    cin >> name;
    cout << "Enter member ID: ";
    cin >> id;
    cout << "Create an 8 digit password: ";
    cin >> password;

    gymMember member1(id, name, password);

    do {
        cout << "\n===============================\n";
        cout << "   Welcome to Gym Management Center! \n";
        cout << "===============================\n";
        cout << "1. View Member Profile\n";
        cout << "2. Update Current Weight\n";
        cout << "3. Pay Monthly Fee\n";
        cout << "4. Change Password\n";
        cout << "5. Change Workout Difficulty\n"; // Added
        cout << "6. Exit System\n";              // Shifted to 6
        cout << "Enter your choice (1 to 6): ";
        cin >> choice;
        cout << "-------------------------------\n";  

        switch (choice) {
            case 1:
                cout << "Member Name: " << member1.memberName << "\n";
                cout << "Member ID  : " << member1.getMemberId() << "\n";
                cout << "Weight     : " << member1.getWeight() << " kg\n";
                cout << "Fees Paid  : " << (member1.ifPaid() ? "Yes" : "No") << "\n";
                cout << "Workout Plan: " << member1.getmemberplan().getPlanName() << "\n";
                cout << "Difficulty  : " << member1.getmemberplan().getDifficulty() << "\n"; 
                cout << "Sessions    : " << member1.getmemberplan().getSessions() << " per week\n"; 
                break;
            
            case 2:
                cout << "Enter weight: ";
                cin >> weight;
                member1.setWeight(weight);
                break;
                
            case 3:
                member1.setPaid();
                break;

            case 4:
                cout << "Enter password to update: ";
                cin >> password;
                member1.setPass(password);
                break;
                
            case 5: { // Added Case 5
                string newDiff;
                cout << "Enter new difficulty level: ";
                cin >> newDiff;
                
                workoutPlan updatedPlan = member1.getmemberplan();
                updatedPlan.setDifficulty(newDiff);
                member1.setPlan(updatedPlan);
                
                cout << "Workout difficulty updated successfully!\n";
                break;
            }
                
            case 6:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
                break;
        }
    } while (choice != 6); // Updated condition

    return 0;
}