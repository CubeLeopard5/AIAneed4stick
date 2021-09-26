/*
** EPITECH PROJECT, 2020
** n4s
** File description:
** my
*/

#include "../lib/my/lib.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "functions.h"


#ifndef MY_H_
#define MY_H_

#define CAR_SPEED (0.5)
#define WHEEL_1(x) instruction("WHEELS_DIR:", "0.005", x)
#define WHEEL_2(x) instruction("WHEELS_DIR:", "0.05", x)
#define WHEEL_3(x) instruction("WHEELS_DIR:", "0.1", x)
#define WHEEL_4(x) instruction("WHEELS_DIR:", "0.15", x)
#define WHEEL_5(x) instruction("WHEELS_DIR:", "0.2", x)
#define WHEEL_6(x) instruction("WHEELS_DIR:", "0.3", x)
#define WHEEL_7(x) instruction("WHEELS_DIR:", "0.5", x)
#define WHEEL_8(x) instruction("WHEELS_DIR:", "0.75", x)
#define LEFT_OR_RIGHT(x) (x > 0 ? "" : "-")

#endif /* !MY_H_ */
