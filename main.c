#include <Windows.h>
#include <stdio.h>
#include <processthreadsapi.h>

int main()
{
    DWORD PID;
    printf("Introdu un PID al unui proces pentru a incepe scanarea ");
    scanf("%d", &PID);
    HANDLE proces = OpenProcess(PROCESS_TERMINATE, FALSE, PID);
    BOOL killproces = TerminateProcess(proces, 0);
return 0;
}