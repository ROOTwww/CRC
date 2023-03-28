/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LEDR_Pin GPIO_PIN_13
#define LEDR_GPIO_Port GPIOC
#define LEDG_Pin GPIO_PIN_14
#define LEDG_GPIO_Port GPIOC
#define LEDB_Pin GPIO_PIN_15
#define LEDB_GPIO_Port GPIOC
#define A_INT_Pin GPIO_PIN_1
#define A_INT_GPIO_Port GPIOA
#define ADC_IOUT_Pin GPIO_PIN_2
#define ADC_IOUT_GPIO_Port GPIOA
#define CHRG_Pin GPIO_PIN_10
#define CHRG_GPIO_Port GPIOB
#define STDBY_Pin GPIO_PIN_11
#define STDBY_GPIO_Port GPIOB
#define L_RST_Pin GPIO_PIN_12
#define L_RST_GPIO_Port GPIOB
#define L_DIO0_Pin GPIO_PIN_14
#define L_DIO0_GPIO_Port GPIOB
#define L_DIO1_Pin GPIO_PIN_15
#define L_DIO1_GPIO_Port GPIOB
#define L_DIO2_Pin GPIO_PIN_8
#define L_DIO2_GPIO_Port GPIOA
#define PWML_Pin GPIO_PIN_9
#define PWML_GPIO_Port GPIOA
#define DIRH_Pin GPIO_PIN_10
#define DIRH_GPIO_Port GPIOA
#define DIRL_Pin GPIO_PIN_15
#define DIRL_GPIO_Port GPIOA
#define PWM_SERVO_Pin GPIO_PIN_3
#define PWM_SERVO_GPIO_Port GPIOB
#define PWMH_Pin GPIO_PIN_4
#define PWMH_GPIO_Port GPIOB
#define A_ADDR_Pin GPIO_PIN_5
#define A_ADDR_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
