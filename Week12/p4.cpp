#include <iostream>
#include <cmath>
using namespace std;

class ObjectTracker {
    private:
    static int activeCount; // Static member to track active objects
    static int totalCreated;  // Static member to track total objects created
    int id; // Unique identifier for each object

    public:
    ObjectTracker() {
        totalCreated++;
        activeCount++;
        id = totalCreated; // Assign unique ID based on total created
        cout << "[+] Created Object #" << id << "| Active Objects: " << activeCount << endl;

    }

    ~ObjectTracker() {
        totalCreated--;
        activeCount--;
        cout << "[-] Destroyed Object #" << id << "| Active Objects: " << activeCount << endl;
    }

    static int getActiveCount() {
        return activeCount;
    }

    static int getTotalCreated() {
        return totalCreated;
    }

};

// Initialize static members
int ObjectTracker::activeCount = 0;
int ObjectTracker::totalCreated = 0;

