#include <stdio.h>
#include <assert.h>

int main() {
    assert(0);  // crash when debug
    printf("No Crash when NDEBUG was defined\n");
    return 0;
}