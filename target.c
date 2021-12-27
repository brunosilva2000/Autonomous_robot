#include "target.h"
#include <stdlib.h>
#include <math.h>

void init_Target(target_t *targ){

    targ->psi_target=0;
    targ->xtarget=0;
    targ->ytarget=0;
    targ->lambda_target=1;
    targ->f_target=0;
     
}

double get_psi_tar(target_t *targ, robot_t *bot)
{
    double ret = atan2((targ->ytarget - bot->yrobot),(targ-> xtarget - bot->xrobot));
}

double get_f_tar(target_t *targ, robot_t *bot){

    double ret = - targ->lambda_target*sin(bot->phi_robot-targ->psi_target);
}
