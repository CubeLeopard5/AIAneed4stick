/*
** EPITECH PROJECT, 2020
** n4s
** File description:
** functions
*/

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

int add_digit_to_nbr(int nbr, int digit);
void ai(void);
float get_wheels_info(void);
void turn(int *lidar);
int average_dist_mid(int *lidar);
int average_dist_right(int *lidar);
int average_dist_left(int *lidar);
void my_putstr_2(char *str);
void instruction(char *instruction, char *strength, char *sign);
int *store_lidar_info(int *is_finished);
void manage_speed(void);
int is_simu_end(char *buffer);

#endif /* !FUNCTIONS_H_ */
