#include "../include/Barre.hpp"

#include <cassert>
using namespace std;
Barre::Barre():m_bYPosition(0),m_bXPosition(0),m_bSpeed(7)
{

}
Barre::Barre(BarreSize barreSize)
{
    assert(barreSize.longueur >= 0 && barreSize.longueur <= 10);
    assert(barreSize.hauteur <= 5 && barreSize.hauteur >= 0);
    m_barreSize.hauteur=barreSize.hauteur;
    m_barreSize.longueur=barreSize.longueur;
}
Barre::~Barre()
{

}
void Barre::movingLeft()
{
    m_bXPosition=m_bXPosition-m_bSpeed;
}
void Barre::movingRight()
{
    m_bXPosition=m_bXPosition+m_bSpeed;
}
int Barre::getBarreXPosition() const
{
    return m_bXPosition;
}
int Barre::getBarreYPosition() const
{
    return m_bYPosition;
} 
unsigned int Barre::getBarreSpeed() const
{
    return m_bSpeed;
}
void Barre::setBarreXPosition(int x)
{
    m_bXPosition=x;
}
void Barre::setBarreYPosition(int y)
{
    m_bYPosition=y;
}
void Barre::setBarreSpeed(unsigned int speed)
{
    assert(speed > 0);
    m_bSpeed=speed;
}