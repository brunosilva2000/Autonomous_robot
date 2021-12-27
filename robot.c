#include <robot.h>
#include <stdlib.h>



void init_Robot(robot_t *bot)
{
    bot->Rrobot=22.5;
    bot->wrobot=0;
    bot->vrobot=30;
    bot->xrobot=0;
    bot->yrobot=0;
    bot->phi_robot=0;
    bot->TOO_FAR=0;
    bot->sensor_IR[]={0};
    bot->sensor_contact[]={0};
}

double get_delta_theta(obs_t *obss)
{
    double ret= obss->theta_obs[2]- obss->theta_obs[1];
}