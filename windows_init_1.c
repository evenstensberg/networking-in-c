#include <stdio.h>
#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib")


// gcc windows_init_1.c -o windows_init_1.exe -lws2_32
int main(int argc, char **argv) {
    WSADATA d;

    if(WSAStartup(MAKEWORD(2, 2), &d)) {
        printf("Failed to initiate\n");
        return -1;
    }
    WSACleanup();
    printf("Ok\n");
    return 0;
}