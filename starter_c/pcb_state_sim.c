/*
 * CS 440 – PCB Simulator Starter (C)
 * Michael Gavina: 801970144
 *
 *
 * TODO: Add your name(s) and BearID(s)
 */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    NEW, READY, RUNNING, WAITING, TERMINATED
} State;

typedef struct PCB {
    int pid;
    char name[32];
    State state;
    int priority;
    int pc;
    int cpuTime;
    struct PCB *next;
} PCB;


// We could make it so that PCB will point to the process behind it and that is the next PCB

// That will then make the queue very easy to implement.
typedef struct rdyQueue {
	PCB *head;
	PCB *tail;
	int size;

} rdyQueue;

typedef struct waitQueue {
	PCB *head;
	PCB *tail;
	int size;
} waitQueue;


//These are not final, feel free to change them, I thought if I just laid the ground work it would work well.

int create(char name[], int priority){


}

int dispatch(){

}

int tick(int n){

}

int block(char name[]){

}

int exit(char name[]){

}

void status(){

}


// This is extra credit which I would be down to go for

int kill(char name[]){

}


// TODO: process table
// TODO: READY queue
// TODO: WAITING queue
// TODO: RUNNING pointer
// TODO: BearID auto-STATUS interval

int main(int argc, char *argv[]) {
    // TODO: parse args
    // TODO: read trace file
    // TODO: dispatch commands
    return 0;
}

// TODO: implement command handlers
