#ifndef _BARRE_HPP
#define _BARRE_HPP
typedef struct BarreSize BarreSize;
struct BarreSize 
{
    unsigned int longueur;
    unsigned int hauteur;
};

class Barre
{
public:
    Barre();
    Barre(BarreSize const barreSize={0,0});
    ~Barre();
    void movingLeft();
    void movingRight();
    int getBarreXPosition()const;
    int getBarreYPosition() const;
    void setBarreXPosition(int x);
    void setBarreYPosition(int y);
    unsigned int getBarreSpeed() const;
    void setBarreSpeed(unsigned int speed);
private:
    BarreSize m_barreSize;
    int m_bXPosition;//X position of the barre
    int m_bYPosition;//Y position of the barre 
    int m_bSpeed; //the speed of the barre
};








#endif