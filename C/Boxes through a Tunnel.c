#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

typedef struct {
    int length;
    int width;
    int height;
} box;

int get_volume(box b) {
    return b.length * b.width * b.height;
}

// Function to check if the box height is less than the maximum height
int is_lower_than_max_height(box b) {
    return b.height < MAX_HEIGHT;
}
int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}
