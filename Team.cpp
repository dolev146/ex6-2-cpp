#include "Team.hpp"

Team::Team(/* args */)
{
    this->skills = 0;
}

Team::Team(double skills)
{
    this->skills = skills;
}

Team::~Team()
{
}

void Team::setScore(int score){
    this->score = score;
}

int Team::getScore(){
    return this->score;
}