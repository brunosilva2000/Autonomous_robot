#include <stdio.h>
#include "robot.h"
#include "obs.h"
#include "target.h"

robot_t robot;
obs_t obs;
target_t target;

void init_device(){
	init_Obstacle(&obs);
	init_Robot(&robot);
	init_Target(&target);
}

void main(){


	init_device();

	double F_Obs = 0;
	double f_stoch = 0;
	double Q = 0.01;
	
	for(int i = 1; i<N_IR; i++){

	 obs->psi_obs=get_psi_obs(&robot, i, &obs);

	 obs->sigma_obs=get_sigma_obs(&robot, i);

	 obs->sigma_obs=get_lambda_obs(&obs, i);

	 obs->f_obs[i]= get_f_obs(&robot, &obs, i);

	 F_Obs = F_Obs+obs->f_obs[i];
	}

	f_stoch=sqrt(Q)*rand();

	target->psi_target=get_psi_tar(&target, &robot);

	target->f_target=get_f_tar(&target, &robot);

	robot->wrobot=F_Obs+f_stoch+target->f_target;

}
