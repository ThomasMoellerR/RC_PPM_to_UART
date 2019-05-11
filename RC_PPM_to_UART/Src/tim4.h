
/******************************************************************************
*  File           :  tim4.h
*  Version        :  1
*  Last Changes   :  2019-05-11 13:46:42
******************************************************************************/

#ifndef __TIM4_H
#define __TIM4_H

#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************
*  Include Files
******************************************************************************/

#include "typ.h"
#include "main.h"

/******************************************************************************
*  Global Constants
******************************************************************************/

#define TIMEOUT_TICKS 100

/******************************************************************************
*  Global Type Definitions
******************************************************************************/

/******************************************************************************
*  Global Variables
******************************************************************************/

extern TUINT8 TIM4_Temp;

extern TUINT16 TIM4_TIM2_u16Ch1_Counter;
extern TUINT16 TIM4_TIM2_u16Ch2_Counter;
extern TUINT16 TIM4_TIM2_u16Ch3_Counter;
extern TUINT16 TIM4_TIM2_u16Ch4_Counter;

extern TUINT16 TIM4_TIM3_u16Ch1_Counter;
extern TUINT16 TIM4_TIM3_u16Ch2_Counter;
extern TUINT16 TIM4_TIM3_u16Ch3_Counter;
extern TUINT16 TIM4_TIM3_u16Ch4_Counter;

/******************************************************************************
*  Global Function Prototypes
******************************************************************************/

extern void TIM4_Ini (void);
extern void TIM4_HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);

/******************************************************************************
*  Changes        :  
*                    
*                    
*                    
******************************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* __TIM4_H */

/******************************************************************************
*  END OF FILE    :  tim4.h
******************************************************************************/
