// Joyce Lin Classes and Objects #4
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class moon
{
    private:
        string name; // name of the moon
        double distance; // distance from the sun
        double mass; // mass of the moon
        double diameter; // diameter of the moon
    
    public:
        // create a default moon constructor - no variable inside
        moon(){}
        moon(string mName, double mDistance, double mMass, double mDiameter)
        {
            name = mName;
            distance = mDistance;
            mass = mMass;
            diameter = mDiameter;
        }

        string getName()
        {
            return name;
        }
};

class planet
{
    private: 
        string name; // name of the planet
        double distance; // distance from the sun
        double mass; // mass of the planet
        double diameter; // diameter of the planet
        int numMoons; // number of moons 
        moon topMoons[3]; // top 3 moons of the planet
    
    public:
        // create a default planet constructor - no variable inside
        planet(){}
        planet(string pName, double pDistance, double pMass, double pDiameter, int pNumMoons, moon pTM1, moon pTM2, moon pTM3)
        {
            name = pName;
            distance = pDistance;
            mass = pMass;
            diameter = pDiameter;
            numMoons = pNumMoons;
            topMoons[0] = pTM1;
            topMoons[1] = pTM2;
            topMoons[2] = pTM3;//![3]
        }

        double getDistance()
        {
            return distance;
        }

        moon getMoon(int i)
        {
            return topMoons[i];
        }
        
        string getName()
        {
            return name;
        }
        string printPlanet(){
            cout<<"Name: "<<name<< endl;
            cout<<"Distance: "<<distance<< endl;
            cout<<"Mass: "<<mass<< endl;
            cout<<"Diameter: "<<diameter<< endl;
            cout<<endl;
        }
};

double distanceP(planet a, planet b)
{
    return abs(a.getDistance() - b.getDistance());
}

string findMoon(moon x, planet arr[8])
{
    for(int i = 0; i< 8; i++)
    {
        for (int j = 0; j<3; j++) // only have 3 top moons
        {
            if(x.getName() == (arr[i].getMoon(j)).getName())
                return arr[i].getName();
        }
    }
}

int main()
{
    planet solarSystem[8] = 
    {
        planet("Mercury",0.33,4879,57.9,0,
            moon("NO MOON",0,0,0),
            moon("NO MOON",0,0,0),
            moon("NO MOON", 0,0,0)),

        planet("Venus",4.87,12104,108.2,0,
            moon("NO MOON",0,0,0),
            moon("NO MOON",0,0,0),
            moon("NO MOON",0,0,0)),

        planet("Earth",5.97,12756,149.6,1,
            moon("Moon",378000,0.07346,3476.2),
            moon("NO MOON",0,0,0),
            moon("NO MOON",0,0,0)),
            
        planet("Mars",0.642,6792,227.9,2,
            moon("Phobos",9270,22.5,10.6),
            moon("Deimos", 23460,12.4,2.4),
            moon("NO MOON",0,0,0)),
            
        planet("Jupiter",1898,142984,778.6,79,
            moon("Io",421600,3629,893.2),
            moon("Europa",670900,3126,480),
            moon("Callisto",1883000,4800,1075.9)),

        planet("Saturn",568,120536,1433.5,82,
            moon("Titan",1221850,5150,1345.5),
            moon("Mimas",185520,398,0.379),
            moon("Rhea",527040,1528,23.1)),

        planet("Uranus",86.8,51118,2872.5,27,
            moon("Umbriel",265970,1190,12.2),
            moon("Ariel",191240,1160,12.9),
            moon("Miranda",129780,472,0.66)),

        planet("Neptune",102,49528,4495.1,14,
            moon("Neso",47279670,60,0.002),
            moon("Sao",22337190,38,0.001),
            moon("Naiad",48200,50,0.002))

    };
    for(int i = 0; i < sizeof(solarSystem)/sizeof(solarSystem[0]); i++){
        solarSystem[i].printPlanet();
    }
    cout << "Distance are: " << distanceP(solarSystem[0], solarSystem[1]) << endl;

    cout << "Find the planet of moon Europa " << findMoon(moon("Europa", 670900,3126,480), solarSystem) << endl;
    return 0;
}