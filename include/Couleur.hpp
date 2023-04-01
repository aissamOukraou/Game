#ifndef _COULEUR_HPP
#define _COULEUR_HPP

class Couleur
{
public: 
    Couleur(unsigned char r=0, unsigned char g=0, unsigned char b=0);
    ~Couleur();
private: 
    unsigned char m_r;
    unsigned char m_g;
    unsigned char m_b;
};



#endif