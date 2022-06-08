#pragma once

class Team
{
private:
    /* data */
public:
    int score = 0;
    double skills;
    Team(/* args */);
    Team(double skills);
    ~Team();
    void setScore(int score);
    int getScore();
};
