/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#include "stm32g0xx_hal.h"

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
#define INTERNAL_LED_RED_Pin GPIO_PIN_13
#define INTERNAL_LED_RED_GPIO_Port GPIOC
#define INTERNAL_LED_GREEN_Pin GPIO_PIN_14
#define INTERNAL_LED_GREEN_GPIO_Port GPIOC
#define INTERNAL_LED_BLUE_Pin GPIO_PIN_15
#define INTERNAL_LED_BLUE_GPIO_Port GPIOC
#define ADC_VIN_Pin GPIO_PIN_0
#define ADC_VIN_GPIO_Port GPIOA
#define ADC_5V_Pin GPIO_PIN_1
#define ADC_5V_GPIO_Port GPIOA
#define ADC_CURRENT_Pin GPIO_PIN_6
#define ADC_CURRENT_GPIO_Port GPIOA
#define ADC_VERSION_Pin GPIO_PIN_7
#define ADC_VERSION_GPIO_Port GPIOA
#define SPI_SS_Pin GPIO_PIN_12
#define SPI_SS_GPIO_Port GPIOB
#define PWM_BUZZER_Pin GPIO_PIN_3
#define PWM_BUZZER_GPIO_Port GPIOB
#define EXT_RGB_LED_BLUE_Pin GPIO_PIN_5
#define EXT_RGB_LED_BLUE_GPIO_Port GPIOB
#define EXT_RGB_LED_GREEN_Pin GPIO_PIN_8
#define EXT_RGB_LED_GREEN_GPIO_Port GPIOB
#define EXT_RGB_LED_RED_Pin GPIO_PIN_9
#define EXT_RGB_LED_RED_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
