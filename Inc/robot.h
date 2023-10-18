//
// Created by yixin on 2023/10/2.
//

#ifndef HW1_ROBOT_H
#define HW1_ROBOT_H

/* field
--------
|  R   |     // red base
|      |
|      |
|      |
|      |
|  B   |    // blue base
--------
*/


struct RobotPos{
    float x;     // m   set down left as (0,0)
    float y;     // m
    float yaw;   // deg
    float pitch; // deg
};

struct RobotHP{
    int hp;
    int max_hp;
};

struct Robot{
    RobotPos robotpos;
    RobotHP robothp;
    ShootParam shoot_param;
};

struct Team{
    Robot hero;
    Robot engineer;
    Robot infantry;
};

struct ShootParam{
    float speed;
    float lethality;
    float hit_possibility;
};

RobotPos* moveRobot(RobotPos *pos, float dx, float dy);
int reduceHP(Robot *robot,int lethality);

#endif //HW1_ROBOT_H
