/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
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
#include "stm32h7xx_hal.h"

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
#define RS_485_TX_EN_Pin GPIO_PIN_2
#define RS_485_TX_EN_GPIO_Port GPIOE
#define RS_485_RX_EN_Pin GPIO_PIN_3
#define RS_485_RX_EN_GPIO_Port GPIOE
#define TELE_CE_Pin GPIO_PIN_0
#define TELE_CE_GPIO_Port GPIOA
#define TELE_CS_Pin GPIO_PIN_1
#define TELE_CS_GPIO_Port GPIOA
#define TELE_IRQ_Pin GPIO_PIN_2
#define TELE_IRQ_GPIO_Port GPIOA
#define TELE_IRQ_EXTI_IRQn EXTI2_IRQn
#define LED_Pin GPIO_PIN_0
#define LED_GPIO_Port GPIOB
#define BTN_INT_Pin GPIO_PIN_9
#define BTN_INT_GPIO_Port GPIOE
#define BTN_INT_EXTI_IRQn EXTI9_5_IRQn
#define GPS_RST_Pin GPIO_PIN_10
#define GPS_RST_GPIO_Port GPIOD
#define GPS_INT_Pin GPIO_PIN_11
#define GPS_INT_GPIO_Port GPIOD
#define CARD_DET_Pin GPIO_PIN_15
#define CARD_DET_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
