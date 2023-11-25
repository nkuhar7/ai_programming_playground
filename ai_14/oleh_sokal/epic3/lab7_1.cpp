#include <stdio.h>
#include <math.h>


int pointInCircle(double x, double y, double R) {
    double distance = sqrt(x * x + y * y);
    return distance <= R;
}


int belong(int R, int numPoints, double points[][2]) {
    int count = 0;

    for (int i = 0; i < numPoints; i++) {
        double x = points[i][0];
        double y = points[i][1];

        if (pointInCircle(x, y, R)) {
            count++;
        }
    }

    return count;
}

int main() {
    int R = 100;

    double points1[][2] = {{2.0, 3.0}, {4.0, 5.0}, {6.0, 7.0}};
    int count1 = belong(R, sizeof(points1) / sizeof(points1[0]), points1);
    printf("Number of points belonging to the circle with 3 parameters: %d\n", count1);

    double points2[][2] = {{1.0, 2.0}, {3.0, 4.0}, {5.0, 6.0}, {7.0, 8.0}, {9.0, 10.0}};
    int count2 = belong(R, sizeof(points2) / sizeof(points2[0]), points2);
    printf("Number of points belonging to the circle with 9 parameters: %d\n", count2);

    double points3[][2] = {{0.0, 1.0}, {2.0, 3.0}, {4.0, 5.0}, {6.0, 7.0}, {8.0, 9.0}, {10.0, 11.0}};
    int count3 = belong(R, sizeof(points3) / sizeof(points3[0]), points3);
    printf("Number of points belonging to the circle with 11 parameters: %d\n", count3);

    return 0;
}
