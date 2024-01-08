#include 	"bsp_key.h"

void KEY_GPIO_Config(void) {
	GPIO_InitTypeDef	GPIO_InitStruct;
	RCC_APB2PeriphClockCmd(KEY1_GPIO_CLK, ENABLE);
	
	GPIO_InitStruct.GPIO_Pin = KEY1_GPIO_PIN;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	
	GPIO_Init( KEY1_GPIO_PORT, &GPIO_InitStruct);
}

uint8_t	Key_Scan(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin) {
	if(GPIO_ReadInputDataBit(GPIOx, GPIO_Pin) == KEY_PRESS) {
		// 松手检测
		while (GPIO_ReadInputDataBit(GPIOx, GPIO_Pin) == KEY_PRESS) {};		
        return KEY_PRESS;					
	}
	else
		return KEY_RELEASE; 
}