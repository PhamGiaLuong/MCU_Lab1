/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
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
#define H11_Pin GPIO_PIN_0
#define H11_GPIO_Port GPIOB
#define H12_Pin GPIO_PIN_1
#define H12_GPIO_Port GPIOB
#define H1_Pin GPIO_PIN_2
#define H1_GPIO_Port GPIOB
#define H9_Pin GPIO_PIN_10
#define H9_GPIO_Port GPIOB
#define H10_Pin GPIO_PIN_11
#define H10_GPIO_Port GPIOB
#define H2_Pin GPIO_PIN_3
#define H2_GPIO_Port GPIOB
#define H3_Pin GPIO_PIN_4
#define H3_GPIO_Port GPIOB
#define H4_Pin GPIO_PIN_5
#define H4_GPIO_Port GPIOB
#define H5_Pin GPIO_PIN_6
#define H5_GPIO_Port GPIOB
#define H6_Pin GPIO_PIN_7
#define H6_GPIO_Port GPIOB
#define H7_Pin GPIO_PIN_8
#define H7_GPIO_Port GPIOB
#define H8_Pin GPIO_PIN_9
#define H8_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
