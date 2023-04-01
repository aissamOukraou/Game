#ifndef _BALL_HPP
#define _BALL_HPP
typedef struct BallDirection BallDirection; 
struct BallDirection
{
    unsigned int x;
    unsigned int y;
};

class Ball
{
public:
    Ball();
    ~Ball(); 
    void setBallDiameter(unsigned int diameter);
    void setBallSpeed(unsigned int speed);
    void setBallXPosition(int x);
    void setBallYPosition(int y);
    void setBallDirection(BallDirection const &ballDirection);
    unsigned int getBallSpeed() const;
    int getBallXPosition() const;
    int getBallYPosition() const;
    unsigned int getBallDiameter() const;
    BallDirection& getBallDirection();
    void checkCollision();
    void move();
private:
    unsigned int m_ballDiameter;
    unsigned int m_ballSpeed;
    int m_ballXPosition; 
    int m_ballYPosition;
    BallDirection m_ballDirection;
};




#endif