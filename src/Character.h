// Program to store and organize character information
// version 0.01
// Expected to be inherited into race/class combinations later on
#ifndef CHARACTER_H
#define CHARACTER_H

class Character
{
    public:
        // attempt to let interpreter autogenerate constructors and destructors

        //Setters:
        void setStrength(int value) { m_physical[0]=value; };
        void setDexterity(int value) { m_physical[1]=value; };
        void setConstitution(int value) { m_physical[2]=value; };
        void setInteligence(int value) { m_mental[0]=value; };
        void setWisdom(int value) { m_mental[1]=value; };
        void setCharisma(int value) { m_mental[2]=value; };
        //Attempt to add all values at once. possibly doable with inline instead
        //void setPhysical(int values[3] ) { m_physical = values; };
        //void setMental(int values[3] ) { m_physical = values; };
        //Getters:
        int getStrength() { return m_physical[0]; };
        int getDexterity() { return m_physical[1]; };
        int getConstitution() { return m_physical[2]; };
        int getInteligence() { return m_mental[0]; };
        int getWisdom() { return m_mental[1]; };
        int getCharisma() { return m_mental[2]; };

    protected:
    private:
        // character parameters
        //physical:
        int m_physical[3];
        int m_mental[3];


};

#endif // CHARACTER_H
