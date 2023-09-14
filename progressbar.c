#include <stdio.h>

void printProgressBar(int progress, int total, int barWidth) {
    float percentage = (float)progress / total;
    int progressWidth = (int)(percentage * barWidth);

    printf("[");
    
    for (int i = 0; i < barWidth; i++) {
        if (i < progressWidth) {
            printf("#");
        } else {
            printf(" ");
        }
    }
    
    printf("] %.2f%%\r", percentage * 100);
    fflush(stdout);
}

int main() {
    int total = 100;
    
    for (int i = 0; i <= total; i++) {
        printProgressBar(i, total, 50);
        // Simulate some work
        // You can replace this with your actual task
        for (int j = 0; j < 1000000; j++) {}
    }
    
    printf("\nTask complete!\n");

    return 0;
}
