#include<iostream>

class Character
{
    private:
        unsigned int health; 
        unsigned int strength; 
        unsigned int exp;
        short int luck; 
        std::string lore;//not initial    
        unsigned int speed; 
    public:
         Character(uint32_t, uint32_t, uint32_t, short int, uint32_t);//constructor
         ~Character();//destructor
         uint32_t GetHealth() const;//todo lo que pongas dentro de esto, no lo puedes modificar, osea todo es inmutable 
         uint32_t GetStrenght() const; 
         uint32_t GetExp() const; 
         short int GetLuck() const; 
         std::string GetLore() const; 
         uint32_t GetSpeed() const; 

         void GetDamage(unsigned int damage);
};

