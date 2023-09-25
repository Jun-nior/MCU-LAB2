void display7SEG(int counter) {
	if (counter == 0) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);

	} else if (counter == 1) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
	} else if (counter == 2) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
	} else if (counter == 3) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
	} else if (counter == 4) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
	} else if (counter == 5) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
	} else if (counter == 6) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
	} else if (counter == 7) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
	} else if (counter == 8) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
	} else if (counter == 9) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);

		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
	}
}

int index_led=0;
int led_buffer[4]={0,0,0,0};
void update7SEG(int index) {
	  switch (index) {
		case 0:
			HAL_GPIO_WritePin(PA6_GPIO_Port, PA6_Pin, RESET);
			HAL_GPIO_WritePin(PA7_GPIO_Port, PA7_Pin, SET);
			HAL_GPIO_WritePin(PA8_GPIO_Port, PA8_Pin, SET);
			HAL_GPIO_WritePin(PA9_GPIO_Port, PA9_Pin, SET);
			display7SEG(led_buffer[index]);
			break;
		case 1:
			HAL_GPIO_WritePin(PA6_GPIO_Port, PA6_Pin, SET);
			HAL_GPIO_WritePin(PA7_GPIO_Port, PA7_Pin, RESET);
			HAL_GPIO_WritePin(PA8_GPIO_Port, PA8_Pin, SET);
			HAL_GPIO_WritePin(PA9_GPIO_Port, PA9_Pin, SET);
			display7SEG(led_buffer[index]);
			break;
		case 2:
			HAL_GPIO_WritePin(PA6_GPIO_Port, PA6_Pin, SET);
			HAL_GPIO_WritePin(PA7_GPIO_Port, PA7_Pin, SET);
			HAL_GPIO_WritePin(PA8_GPIO_Port, PA8_Pin, RESET);
			HAL_GPIO_WritePin(PA9_GPIO_Port, PA9_Pin, SET);
			display7SEG(led_buffer[index]);
			break;
		case 3:
			HAL_GPIO_WritePin(PA6_GPIO_Port, PA6_Pin, SET);
			HAL_GPIO_WritePin(PA7_GPIO_Port, PA7_Pin, SET);
			HAL_GPIO_WritePin(PA8_GPIO_Port, PA8_Pin, SET);
			HAL_GPIO_WritePin(PA9_GPIO_Port, PA9_Pin, RESET);
			display7SEG(led_buffer[index]);
			break;
		default:
			break;
	  }
}

void updateClockBuffer(int *led_buffer, int hour, int minute) {
	if (hour<10) {
		led_buffer[0]=0;
		led_buffer[1]=hour;
	} else {
		led_buffer[0]=hour/10;
		led_buffer[1]=hour%10;
	}
	if (minute<10) {
		led_buffer[2]=0;
		led_buffer[3]=minute;
	} else {
		led_buffer[2]=minute/10;
		led_buffer[3]=minute%10;
	}
}
