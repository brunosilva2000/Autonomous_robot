#include <obs.h>
#include <stdlib.h>
#include <math.h>

void init_Obstacle(obs_t *obss)
{
     obss->beta1=20;
     obss->beta2=20;
     obss->psi_obs[N_IR]={0};
     obss->sigma_obs[N_IR]={0};
     obss->lambda_obs[N_IR]={0};
     obss->theta_obs[N_IR]={0,0,0,0,0,0,0};
    
}

double get_lambda_obs(obs_t* obss, int i)
{
    double ret= obss->beta1* exp(dc(i)/beta2);//colocar a função dentro dum ciclo for
}

double get_sigma_obs(robot_t *bot, int i)
{
    //também é pra colocar dentro dum ciclo for de i até 7
    double ret=atan(tan(bot->delta_theta/2)+ ((bot->Rrobot)/(bot->Rrobot + dc(i))));
}

double get_psi_obs(robot_t *bot, int i, obs_t *obss)
{
    //meter detro do for
    double ret= bot->phi_robot+ obss->theta_obs[i];
}

double get_f_obs(robot_t *bot, obs_t *obss, int i){

    double ret = obs->lambda_obs[i]*(robot->phi_robot-obs->psi_obs[i])
    *exp(-(robot->phi_robot-obs->psi_obs[i])^2/(2*(obs->sigma_obs[i]^2)));
}

