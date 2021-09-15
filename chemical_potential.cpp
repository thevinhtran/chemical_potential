/**
*       Chemical Potential Partial Derivatives 
**/ 

#include <iostream>
#include <fstream>
#include <cmath> 
#include helper.h 

class baryon
{
    public:
        // relevant parameters for a given baryon, some of which are dependent
        // on total baryon density and number density... 
        double baryon_density; 
        double number_density; 


        double mass; 
        double isospin; 
        double density; 

        double pf; 
        double m_eff; 

        void initialize(double baryon_density_val, double number_density_val, double mass_val ){
            baryon_density = baryon_density_val; 
            mass = mass_val; 
            number_density = number_density_val; 

            // might have to scale fermi momentum...
            pf = pow(3*pi*pi*number_density, 1.0/3.0);
            // possible issue here, what does it mean for a field sigma to take on
            // a specific value?
            m_eff = sqrt(pow(p_fi,2) + pow(mass - ))
        }

}

class lepton 
{
    public: 
        double mass; 
        double chemical_potential; 
        double pf; 
        double num_density; 

        void initialize(double mass_val, double density_val, double pf_val){
            mass = mass_val; 
            num_density = density_val; 

            pf = pow(3*pi*pi*num_density, 1.0/3.0);
            chemical_potential = sqrt(pow(hbarc*pf,2) + pow(mass*c*c),2); 
        }
}


class equation_of_state
{   
    // probably would only be for sigma-omega-rho type models. Essentially only thing that we can 
    // do here is define the coupling constants. 
    public:
        double g_sigma[num_species]; 
        double g_omega[num_species]; 

        void initialize(double sigma, double omega){
            g_sigma = sigma;
            g_omega = omega; 
        }

}

// ideally, to generalize this any arbitrary baryon, would need to include here a solver for systems of linear equations.
// Essentially would need a matrix inverter... But would that even be something we want to do here in C?
// Mathematica would be able to do this symbollically without any issues and could just import into here 

// Alternative idea! First calculate the matrix elements and then solve for chemical potentials numerically afterwards... 
// Like rather than find an analytic expression for the chemical potential 



//  First, calculate the matrix elements Y_ij 


double Y_ij(int i, int j, double baryon_density, double number_density){
    // calculates Y_ij as a function of number density n_i and baryon density n_B... 
    // need to iterate through an array of class objects... is this possible? 
    double helper_1; 
    double helper_2;
    double helper_3; 
    double helper_4; 

    double a_11 = 1.0; 
    for(int i = 0; i < num_species; i++){
        a_11 = 
    }


    double a_12 = 0.0; 
    for(int i = 0; i < num_species; i++){
        a_12 = 
    }

    double a_21 = 0.0; 
    for(int i = 0; i < num_species; i++){
        a_13 = ; 
    }

    double a_22 = 1.0; 
    for(int i = 0; i < num_species; i++){
        a_22 = ; 
    }

    double A = a_22*a_11 - a_12*a_21; 

    

}

// Then using the matrix elements solve for chemical potentials... 
// At each step though, would need to write out nB, ni's, and the chemical potentials for later 
// partial derivative calculations. 

// would then need a partial derivative routine... 
// in addition, would need to write out arrays of the baryon densities and other stuf.... 
double partial_derivative(double x, double y, double z){
    // 
}


// then actually calculate the difference in the sound speed...

// would have to code in some disgusting systems of equations   

// then send off the data to Dr. Jaikumar so he can plug into his g-mode code
double sound_speed_difference(){
    // returns sound speed difference... 
}






int main(int argc, char argv[]){
    // declare the baryon classes and stuff...
    baryon neutron; 



    // use mainly for just doing the writing... 
    std::ofstream write_output("Data_output.txt");
    assert(write_open.is_open());

    write_output.close();

    return 0; 
}