#include <stdio.h>

int main() {
    int n, i, target, found = -1;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    for(i = 0; i < n; i++) {
        if(arr[i] == target) {
            found = i;
            break;
        }
    }
    if(found != -1) {
        printf("Found at index %d\n", found);
    } else {
        printf("-1\n");
    }
        
    return 0;
}