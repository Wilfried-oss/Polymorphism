#include <iostream>
#include <math.h>

using namespace std;

class FormeGeometrique
{
    public:
        virtual double surface() = 0;
        virtual double volume() = 0;
};


class Cube : public FormeGeometrique

{
    private:
        double arret;

    public:
        Cube(double a)
        {
             arret = a;
        }

        double surface()
        {
            return (6*arret*arret);
        }

        double volume()
        {
            return (arret*arret*arret);
        }

};


class Cylindre : public FormeGeometrique
{
    private:
        double rayon;
        double hauteur;

    public:
        Cylindre(double r, double h)
        {
            rayon = r;
            hauteur = h;
        }

        double surface()
        {
            return 2*3.14*rayon*hauteur + 2*3.14*rayon *rayon;
        }

        double volume()
        {
            return (3.14*rayon*rayon*hauteur);
        }
};

class Sphere : public FormeGeometrique
{
    private:
        double rayon;

    public:
        Sphere(double r)
        {
            rayon = r;
        }


        double surface()
        {
            return (4*3.14*rayon*rayon);
        }

        double volume()
        {
            return (4/3 * 3.14 * rayon * rayon * rayon);
        }
};

class Cone : public FormeGeometrique
{
    private:
        double rayon;
        double hauteur;
    public:
        Cone(double r, double h)
        {
            rayon = r;
            hauteur = h;
        }

        double surface()
        {
            return (3.14 * rayon * sqrt(rayon*rayon + hauteur*hauteur ));
        }

        double volume()
        {
            return (1/3 * 3.14 * rayon * rayon * hauteur);
        }

};

int main()
{
    Cone Co(3, 3);
    cout << "La surface du Cone  est : " << Co.surface();
    cout << endl;

    return 0;
}

