/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f1xx_hal.h"

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
#define KEY0_Pin GPIO_PIN_13
#define KEY0_GPIO_Port GPIOC
#define i2c2_SCL_Pin GPIO_PIN_0
#define i2c2_SCL_GPIO_Port GPIOB
#define i2c2_SDA_Pin GPIO_PIN_1
#define i2c2_SDA_GPIO_Port GPIOB
#define i2c1_SCL_Pin GPIO_PIN_10
#define i2c1_SCL_GPIO_Port GPIOB
#define i2c1_SDA_Pin GPIO_PIN_11
#define i2c1_SDA_GPIO_Port GPIOB
#define SENSOR_INT2_Pin GPIO_PIN_12
#define SENSOR_INT2_GPIO_Port GPIOB
#define SENSOR_INT2_EXTI_IRQn EXTI15_10_IRQn
#define SENSOR_INT1_Pin GPIO_PIN_15
#define SENSOR_INT1_GPIO_Port GPIOB
#define SENSOR_INT1_EXTI_IRQn EXTI15_10_IRQn
#define KEY3_Pin GPIO_PIN_5
#define KEY3_GPIO_Port GPIOB
#define KEY2_Pin GPIO_PIN_8
#define KEY2_GPIO_Port GPIOB
#define KEY1_Pin GPIO_PIN_9
#define KEY1_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
