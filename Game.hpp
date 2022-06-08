#ifndef GAME_HPP
#define GAME_HPP

class Game
{
private:
    /* data */
public:
    int score = 0;
    Game(/* args */);
    ~Game();
    int getScore();
    void setScore(int score);
};

#endif