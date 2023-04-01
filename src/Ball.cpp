#include "../include/Ball.hpp"
#include <cassert>
using namespace std;
Ball::Ball():m_ballXPosition(0), m_ballYPosition(0),m_ballDiameter(0),m_ballSpeed(15)
{
    m_ballDirection.x=0;
    m_ballDirection.y=0;
}
Ball::~Ball()
{
}
void Ball::setBallDiameter(unsigned int diameter)
{
    assert(diameter <= 5 && diameter >= 0);
    m_ballDiameter=diameter;
}
void Ball::setBallSpeed(unsigned int speed)
{
    assert(speed > 0);
    m_ballSpeed=speed;
}
void Ball::setBallXPosition(int x)
{
    m_ballXPosition=x;
}
void Ball::setBallYPosition(int y)
{
    m_ballYPosition=y;
}
void Ball::setBallDirection(BallDirection const &ballDirection)
{
    m_ballDirection.x=ballDirection.x;
    m_ballDirection.y=ballDirection.y;
}
unsigned int Ball::getBallDiameter() const 
{
    return m_ballDiameter;
}
unsigned int Ball::getBallSpeed() const 
{
    return m_ballSpeed;
}
int Ball::getBallXPosition() const 
{
    return m_ballXPosition;
}
int Ball::getBallYPosition() const 
{
    return m_ballYPosition;
}
BallDirection& Ball::getBallDirection() 
{
    return m_ballDirection;
}
void Ball::move()
{
    
}
