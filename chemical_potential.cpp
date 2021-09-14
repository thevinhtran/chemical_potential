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

        double p_fi; 
        double m_eff; 

        void initialize(double baryon_density_val, double number_density_val, double mass_val ){
            baryon_density = baryon_density_val; 
            mass = mass_val; 
            number_density = number_density_val; 

            p_fi = ; 

        }

}

class lepton 
{
    public: 
        double mass; 
        double chemical_potential; 

        void initialize(double mass_val, double )
}

class equation_of_state
{   
    // probably would only be for sigma-omega-rho type models. Essentially only thing that we can 
    // do here is define the coupling constants. 
    public:
        double g_sigma; 
        double g_omega; 

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
    double helper_1; 
    double helper_2;
    double helper_3; 
    double helper_4; 

    double a_11 = 1.0; 
    for(int i = 0; i < num_species; i++){
        a_11 = 
    }
}

// Then using the matrix elements solve for chemical potentials... 
// At each step though, would need to write out nB, ni's, and the chemical potentials for later 
// partial derivative calculations. 

// would then need a partial derivative routine... 
// in addition, would need to write out arrays of the baryon densities and other stuf.... 
double partial_derivative


// then actually calculate the difference in the sound speed...
// then send off the data to Dr. Jaikumar so he can plug into his g-mode code
void sound_speed


int main(int argc, char argv[]){
    // declare the baryon classes and stuff...



    // use mainly for just doing the writing... 
    std::ofstream write_output("Data_output.txt");
    assert(write_open.is_open());

    write_output.close();

    return 0; 
}