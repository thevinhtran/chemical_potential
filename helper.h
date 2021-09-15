/**
*       Helper functions and constants 
**/ 

#include <cmath> 

const double pi = M_PI; 
const double hbarc = 197.3; 
const double c; 


// number of species in consideration: Neutron, Proton, Lambda (only Baryons)

int num_species = 3; 

// coupling constants (Glenn Dennings 1985, can find a more up to date model...)
const double g_omega_e = 0.0; 
const double g_omega_p  = 0.0; 
const double g_omega_k = 0.0; 



const double g_omega[num_species] = {};   

int kronecker(int i, int j){
    // kronecker delta 
    if (i == j){
        return 1; 
    }
    else{
        return 0; 
    }
}

