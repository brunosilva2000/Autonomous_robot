#include <stdio.h>
#include "robot.h"
#include "obs.h"

typedef struct target{

    double psi_target;
    double xtarget;
    double ytarget;
    double lambda_target;
    double f_target;

}target_t;

void init_Target(target_t *targ);
double get_psi_tar(target_t *targ, robot_t *bot);
double get_f_tar(target_t *targ, robot_t *bot);