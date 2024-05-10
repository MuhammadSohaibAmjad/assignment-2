#include <stdio.h>

int main() {
  int a;
	scanf("%d",&a);
	
	int n=a;
	int maxnum=0;
    int max_len=0;
    for (int i = 2; i <=a; i++) {
        n = i;
        int length = 0;
        while (n != 1) { // The loop stops at at n = 1
            if (n % 2 == 0) {
                n = n / 2;
            } else {
                n = 3 * n + 1;
            }
            length++;
        }
        // Check if the current length is greater than the maximum length
        if (length > max_len) {
            max_len = length;
            maxnum = i;
        }
    }
    printf("Maximum length: %d\n", max_len);
    printf("Corresponding value of n: %d\n", maxnum);

    return 0;
}

