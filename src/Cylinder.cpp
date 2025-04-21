# ifndef CYLINDER_CPP
# define CYLINDER_CPP
# include<cmath>
# include<iomanip>
# include "Cylinder.h"

double Cylinder :: SurfaceArea(){
    
    return M_PI*radius*radius*2.0 + M_PI*2.0*radius*height;
}

double Cylinder :: Volume(){

    return M_PI*radius*radius*height;
}

double Cylinder :: Circumference(){

    return M_PI*2.0*radius;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
     out <<"Circumference: " <<fixed<<setprecision(3)<< cldr.Circumference() <<endl;
     out <<"SurfaceArea: "<< fixed<<setprecision(3) << cldr.SurfaceArea() << endl;
     out <<"Volume: " <<fixed<<setprecision(3) << cldr.Volume() <<endl;
    return out;
}

# endif
