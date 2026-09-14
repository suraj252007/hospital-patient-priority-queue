#include <stdio.h>
#include <string.h>

#define MAX 100

struct Patient {
    char name[20];
    int priority;
};

struct Patient queue[MAX];
int size = 0;

// Add a patient to the priority queue
void addPatient(char name[], int priority) {
    if (size == MAX) {
        printf("Queue is full!\n");
        return;
    }

    strcpy(queue[size].name, name);
    queue[size].priority = priority;
    size++;

    printf("Patient %s added with priority %d\n", name, priority);
}

// Treat the most urgent patient
void treatNextPatient() {
    if (size == 0) {
        printf("No patients waiting.\n");
        return;
    }

    int highestPriority = 0;

    // Find patient with the lowest priority number
    for (int i = 1; i < size; i++) {
        if (queue[i].priority < queue[highestPriority].priority) {
            highestPriority = i;
        }
    }

    printf("Treating patient: %s (Priority %d)\n",
           queue[highestPriority].name,
           queue[highestPriority].priority);

    // Remove the treated patient
    for (int i = highestPriority; i < size - 1; i++) {
        queue[i] = queue[i + 1];
    }

    size--;
}

int main() {

    printf("=== Hospital Patient Priority Queue ===\n\n");

    // Step 3 test: Add P1-P6
    addPatient("P1", 3);
    addPatient("P2", 1);
    addPatient("P3", 2);
    addPatient("P4", 1);
    addPatient("P5", 3);
    addPatient("P6", 2);

    printf("\n--- Treatment Order ---\n");

    // Treat first 3 patients
    treatNextPatient();
    treatNextPatient();
    treatNextPatient();

    // Add a new Emergency patient
    printf("\n--- Adding New Emergency Patient ---\n");
    addPatient("P7", 1);

    printf("\n--- Remaining Treatment Order ---\n");

    // Treat remaining patients
    while (size > 0) {
        treatNextPatient();
    }

    return 0;
}
