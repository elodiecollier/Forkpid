#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <iostream>

using namespace std;

int main() {
  pid_t processID;
  pid_t p_processID;
  processID = getpid();
  p_processID = getppid();
  cout << "Current process id: " << processID << endl;
  cout << "Parent process id: " << p_processID << endl;
  processID = fork();
  sleep(3);
  if (processID == 0) {
    cout << "Child process id (following fork): " << getpid() << endl;                     
    cout << "Child's parent process id (following fork): " << getppid() << endl;  
  } //if
} //main
