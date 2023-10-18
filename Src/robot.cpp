//
// Created by yixin on 2023/10/2.
//

#include "../Inc/robot.h"
#include<math.h>

RobotPos* moveRobot(RobotPos *pos, float dx, float dy){
    pos->x = pos->x + dx;
    pos->y = pos->y + dy;
    return pos;
}

int reduceHP(Robot *robot,int lethality)
{
    robot->robothp.hp-=lethality;
    return robot->robothp.hp;
}

RobotPos* shootpos_compute(Robot *shooter,Robot *target)
{
    float v=shooter->shoot_param.speed;
    float dis=sqrt(pow(target->robotpos.y-shooter->robotpos.y,2)+pow(target->robotpos.x-shooter->robotpos.x,2));
    shooter->robotpos.yaw=atan((target->robotpos.y-shooter->robotpos.y)/(target->robotpos.x-shooter->robotpos.x));
    shooter->robotpos.pitch=0.5*asin(9.8*dis/pow(v,2));
}

int shoot(Robot *shooter,Robot *target)
{
    shootpos_compute(shooter,target);
    reduceHP(target,shooter->shoot_param.lethality);
}

void init()
{
    Team Red;
    Team Blue;
}