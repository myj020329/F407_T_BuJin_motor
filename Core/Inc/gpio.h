/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    gpio.h
  * @brief   This file contains all the function prototypes for
  *          the gpio.c file
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __GPIO_H__
#define __GPIO_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* USER CODE BEGIN Private defines */
#define KEY_ON	1
#define KEY_OFF	0

#define STEPMOTOR_DIR_FORWARD()               HAL_GPIO_WritePin(GPIOE,GPIO_PIN_0,GPIO_PIN_SET)
#define STEPMOTOR_DIR_REVERSAL()              HAL_GPIO_WritePin(GPIOE,GPIO_PIN_0,GPIO_PIN_RESET)

#define STEPMOTOR_OUTPUT_ENABLE()             HAL_GPIO_WritePin(GPIOE,GPIO_PIN_1,GPIO_PIN_RESET)
#define STEPMOTOR_OUTPUT_DISABLE()            HAL_GPIO_WritePin(GPIOE,GPIO_PIN_1,GPIO_PIN_SET)

/* USER CODE END Private defines */

void MX_GPIO_Init(void);

/* USER CODE BEGIN Prototypes */
uint8_t Key_Scan(GPIO_TypeDef* GPIOx,uint16_t GPIO_Pin);
/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ GPIO_H__ */

