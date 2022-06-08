#pragma once

class Schedule
{
private:
    /* data */
public:
    int score;
    void setScore(int score);
    int getScore();
    int first_team_id;
    int second_team_id;
    Schedule(/* args */);
    ~Schedule();
};


