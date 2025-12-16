#include <stdio.h>

#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int costG, costP;
        scanf("%d %d", &costG, &costP);

        int N;
        scanf("%d", &N);

        int solve1 = 0, solve2 = 0;

        for (int i = 0; i < N; i++) {
            int p1, p2;
            scanf("%d %d", &p1, &p2);

            if (p1 == 1) solve1++;
            if (p2 == 1) solve2++;
        }

        // Option 1: Green for problem 1, Purple for problem 2
        int cost1 = solve1 * costG + solve2 * costP;

        // Option 2: Purple for problem 1, Green for problem 2
        int cost2 = solve1 * costP + solve2 * costG;

        // Print minimum cost
        printf("%d\n", cost1 < cost2 ? cost1 : cost2);
    }

    return 0;
}
