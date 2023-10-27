/*
 * display_7_seg.c
 *
 *  Created on: Oct 14, 2023
 *      Author: ACER
 */


#include "display_7_seg.h"
#include "main.h"

void display7SEG_A(int num){
	switch ( num ) {
	 	 case 0:
	 		 HAL_GPIO_WritePin ( GPIOB , LED7A_0_Pin | LED7A_1_Pin |LED7A_2_Pin | LED7A_3_Pin | LED7A_4_Pin | LED7A_5_Pin ,GPIO_PIN_RESET ) ;
	 		 HAL_GPIO_WritePin ( GPIOB , LED7A_6_Pin , GPIO_PIN_SET ) ;
	 		 break ;
	 	 case 1:
	 		 HAL_GPIO_WritePin ( GPIOB , LED7A_1_Pin | LED7A_2_Pin , GPIO_PIN_RESET ) ;
	 		 HAL_GPIO_WritePin ( GPIOB , LED7A_0_Pin | LED7A_3_Pin |LED7A_4_Pin | LED7A_5_Pin | LED7A_6_Pin , GPIO_PIN_SET ) ;
	 		 break ;
	 	 case 2:
	 		 HAL_GPIO_WritePin ( GPIOB , LED7A_0_Pin | LED7A_1_Pin |LED7A_3_Pin | LED7A_4_Pin | LED7A_6_Pin , GPIO_PIN_RESET ) ;
	 		 HAL_GPIO_WritePin ( GPIOB , LED7A_2_Pin | LED7A_5_Pin ,GPIO_PIN_SET ) ;
	 		 break ;
	 	 case 3:
			HAL_GPIO_WritePin ( GPIOB , LED7A_0_Pin | LED7A_1_Pin |LED7A_2_Pin | LED7A_3_Pin | LED7A_6_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( GPIOB , LED7A_4_Pin | LED7A_5_Pin ,GPIO_PIN_SET ) ;
			break ;
	 	 case 4:
	 		 HAL_GPIO_WritePin ( GPIOB , LED7A_1_Pin | LED7A_2_Pin |LED7A_5_Pin | LED7A_6_Pin , GPIO_PIN_RESET ) ;
	 		 HAL_GPIO_WritePin ( GPIOB , LED7A_0_Pin | LED7A_3_Pin |LED7A_4_Pin , GPIO_PIN_SET ) ;
	 		 break ;
	 	 case 5:
	 		 HAL_GPIO_WritePin ( GPIOB , LED7A_0_Pin | LED7A_2_Pin |LED7A_3_Pin | LED7A_5_Pin | LED7A_6_Pin , GPIO_PIN_RESET ) ;
	 		 HAL_GPIO_WritePin ( GPIOB , LED7A_1_Pin | LED7A_4_Pin ,GPIO_PIN_SET ) ;
	 		 break ;
	 	 case 6:
	 		 HAL_GPIO_WritePin ( GPIOB , LED7A_0_Pin | LED7A_2_Pin |LED7A_3_Pin | LED7A_4_Pin | LED7A_5_Pin | LED7A_6_Pin ,GPIO_PIN_RESET ) ;
	 		 HAL_GPIO_WritePin ( GPIOB , LED7A_1_Pin , GPIO_PIN_SET ) ;
	 		 break ;
	 	 case 7:
	 		 HAL_GPIO_WritePin ( GPIOB , LED7A_0_Pin | LED7A_1_Pin |LED7A_2_Pin , GPIO_PIN_RESET ) ;
	 		 HAL_GPIO_WritePin ( GPIOB , LED7A_3_Pin | LED7A_4_Pin |LED7A_5_Pin | LED7A_6_Pin , GPIO_PIN_SET ) ;
	 		 break ;
	 	 case 8:
	 		 HAL_GPIO_WritePin ( GPIOB , LED7A_0_Pin | LED7A_1_Pin |LED7A_2_Pin | LED7A_3_Pin | LED7A_4_Pin | LED7A_5_Pin | LED7A_6_Pin ,GPIO_PIN_RESET ) ;
	 		 break ;
	 	 case 9:
	 		 HAL_GPIO_WritePin ( GPIOB , LED7A_0_Pin | LED7A_1_Pin |LED7A_2_Pin | LED7A_3_Pin | LED7A_5_Pin | LED7A_6_Pin ,GPIO_PIN_RESET ) ;
	 		 HAL_GPIO_WritePin ( GPIOB , LED7A_4_Pin , GPIO_PIN_SET ) ;
	 		 break ;
	 }
}

void init7SEG_A(){
	HAL_GPIO_WritePin ( GPIOB , LED7A_0_Pin | LED7A_1_Pin |LED7A_2_Pin | LED7A_3_Pin | LED7A_4_Pin | LED7A_5_Pin | LED7A_6_Pin ,GPIO_PIN_SET ) ;
}

void display7SEG_B(int num){
	switch ( num ) {
	 	 case 0:
	 		 HAL_GPIO_WritePin ( GPIOB , LED7B_0_Pin | LED7B_1_Pin |LED7B_2_Pin | LED7B_3_Pin | LED7B_4_Pin | LED7B_5_Pin ,GPIO_PIN_RESET ) ;
	 		 HAL_GPIO_WritePin ( GPIOB , LED7B_6_Pin , GPIO_PIN_SET ) ;
	 		 break ;
	 	 case 1:
	 		 HAL_GPIO_WritePin ( GPIOB , LED7B_1_Pin | LED7B_2_Pin , GPIO_PIN_RESET ) ;
	 		 HAL_GPIO_WritePin ( GPIOB , LED7B_0_Pin | LED7B_3_Pin |LED7B_4_Pin | LED7B_5_Pin | LED7B_6_Pin , GPIO_PIN_SET ) ;
	 		 break ;
	 	 case 2:
	 		 HAL_GPIO_WritePin ( GPIOB , LED7B_0_Pin | LED7B_1_Pin |LED7B_3_Pin | LED7B_4_Pin | LED7B_6_Pin , GPIO_PIN_RESET ) ;
	 		 HAL_GPIO_WritePin ( GPIOB , LED7B_2_Pin | LED7B_5_Pin ,GPIO_PIN_SET ) ;
	 		 break ;
	 	 case 3:
			HAL_GPIO_WritePin ( GPIOB , LED7B_0_Pin | LED7B_1_Pin |LED7B_2_Pin | LED7B_3_Pin | LED7B_6_Pin , GPIO_PIN_RESET ) ;
			HAL_GPIO_WritePin ( GPIOB , LED7B_4_Pin | LED7B_5_Pin ,GPIO_PIN_SET ) ;
			break ;
	 	 case 4:
	 		 HAL_GPIO_WritePin ( GPIOB , LED7B_1_Pin | LED7B_2_Pin |LED7B_5_Pin | LED7B_6_Pin , GPIO_PIN_RESET ) ;
	 		 HAL_GPIO_WritePin ( GPIOB , LED7B_0_Pin | LED7B_3_Pin |LED7B_4_Pin , GPIO_PIN_SET ) ;
	 		 break ;
	 	 case 5:
	 		 HAL_GPIO_WritePin ( GPIOB , LED7B_0_Pin | LED7B_2_Pin |LED7B_3_Pin | LED7B_5_Pin | LED7B_6_Pin , GPIO_PIN_RESET ) ;
	 		 HAL_GPIO_WritePin ( GPIOB , LED7B_1_Pin | LED7B_4_Pin ,GPIO_PIN_SET ) ;
	 		 break ;
	 	 case 6:
	 		 HAL_GPIO_WritePin ( GPIOB , LED7B_0_Pin | LED7B_2_Pin |LED7B_3_Pin | LED7B_4_Pin | LED7B_5_Pin | LED7B_6_Pin ,GPIO_PIN_RESET ) ;
	 		 HAL_GPIO_WritePin ( GPIOB , LED7B_1_Pin , GPIO_PIN_SET ) ;
	 		 break ;
	 	 case 7:
	 		 HAL_GPIO_WritePin ( GPIOB , LED7B_0_Pin | LED7B_1_Pin |LED7B_2_Pin , GPIO_PIN_RESET ) ;
	 		 HAL_GPIO_WritePin ( GPIOB , LED7B_3_Pin | LED7B_4_Pin |LED7B_5_Pin | LED7B_6_Pin , GPIO_PIN_SET ) ;
	 		 break ;
	 	 case 8:
	 		 HAL_GPIO_WritePin ( GPIOB , LED7B_0_Pin | LED7B_1_Pin |LED7B_2_Pin | LED7B_3_Pin | LED7B_4_Pin | LED7B_5_Pin | LED7B_6_Pin ,GPIO_PIN_RESET ) ;
	 		 break ;
	 	 case 9:
	 		 HAL_GPIO_WritePin ( GPIOB , LED7B_0_Pin | LED7B_1_Pin |LED7B_2_Pin | LED7B_3_Pin | LED7B_5_Pin | LED7B_6_Pin ,GPIO_PIN_RESET ) ;
	 		 HAL_GPIO_WritePin ( GPIOB , LED7B_4_Pin , GPIO_PIN_SET ) ;
	 		 break ;
	 }
}

void init7SEG_B(){
	HAL_GPIO_WritePin ( GPIOB , LED7B_0_Pin | LED7B_1_Pin |LED7B_2_Pin | LED7B_3_Pin | LED7B_4_Pin | LED7B_5_Pin | LED7B_6_Pin ,GPIO_PIN_SET ) ;
}
