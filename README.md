# Modular Domain Model: Gym Management Engine

A modular C++ domain engine built to show clean OOP and multi-file translation. Using structural class composition, a standalone workout entity is cleanly nested inside a protected member profile. Strict encapsulation ensures data hiding, routing states through private validation gates rather than a monolithic loop.

## 📋 Prerequisites
* **Compiler:** GCC/G++ compiler installed and configured in your system's environment variables path (e.g., MinGW for Windows).
* **Environment:** Any standard terminal interface (VS Code Integrated Terminal, PowerShell, or Command Prompt).

## 🚀 Compilation & Execution

Follow these steps sequentially to run the project locally:

### Step 1: Navigate to the Project Directory
Open your terminal and use the `cd` command to move into the folder containing all your `.cpp` and `.h` files:
```bash
cd "path/to/your/project/folder"
Step 2: Compile the Project Source Files
Run the following compiler command to link the translation units and build the unified binary file:

Bash
g++ main.cpp gymMember.cpp workoutPlan.cpp -o gymApp
Step 3: Run the Application
Execute the compiled binary directly inside your terminal interface:

On Windows (PowerShell/CMD):

Bash
.\gymApp
On macOS / Linux:

Bash
./gymApp
📁 File Structure
workoutPlan.h / workoutPlan.cpp — Independent component managing blueprint names, frequencies, and difficulty levels.

gymMember.h / gymMember.cpp — Member identity management utilizing composition to nest the workout system.

main.cpp — The system driver console loop driving runtime inputs.
