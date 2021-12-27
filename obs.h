#include <stdio.h>
#include "robot.h"
#include "target.h"

/*
*@param: beta 1 controls the magnitude of the repulsive force
*@param: beta 2 controls the magnitude of the repulsive force
*
*
*/

typedef struct obs{
    double beta1;
    double beta2;
    double psi_obs[N_IR]; // psi do obstaculo
    double sigma_obs[N_IR]; //sensores???
    double lambda_obs[N_IR];
    double theta_obs[N_IR]; 
    double f_obs[N_IR];
}obs_t;

void init_Obstacle(obs_t *obss);
double get_lambda_obs(obs_t* obss, int i);
double get_sigma_obs(robot_t *bot, int i);
double get_psi_obs(robot_t *bot, int i, obs_t *obss);
double get_f_obs(robot_t *bot, obs_t *obss, int i);
