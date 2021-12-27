#include <stdio.h>
#include "obs.h"
#define N_IR 7
#define N_contact 7


typedef struct robot{

    double wrobot;
    double vrobot;
    double xrobot;
    double yrobot;
    double phi_robot;
    double delta_theta;
    float Rrobot;
    double TOO_FAR;
    double sensor_IR[N_IR];
    double sensor_contact[N_contact];
    
}robot_t;

void init_Robot(robot_t *bot);
double get_delta_theta(obs_t *obss);

