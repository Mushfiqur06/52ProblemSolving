#include<stdio.h>

int main()
{
    int t, i, opponent_run, current_run, ball_remaining, ball_played;
    double current_run_rate, asking_run_rate;

    scanf("%d", &t);

    while(t--){
        scanf("%d %d %d", opponent_run, current_run, ball_remaining);

        ball_played = 300 - ball_remaining;
        current_run_rate = (current_run / ball_played) * 6;
        asking_run_rate = ((opponent_run - current_run + 1) / ball_remaining) * 6;
        printf("%0.2lf %0,2lf\n", current_run_rate, asking_run_rate);
    }

    return 0;
}
