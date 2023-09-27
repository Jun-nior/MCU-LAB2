const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint8_t matrix_buffer [8] = {0x18 , 0x3C , 0x66 , 0x66 , 0x7E , 0x7E, 0x66 , 0x66 };

void displayLEDMatrix(int row, int column) {
	if (row==0) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, SET);
	} else if (row==1) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, SET);
	} else if (row==2) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, SET);
	} else if (row==3) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, SET);
	} else if (row==4) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, SET);
	} else if (row==5) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, SET);
	} else if (row==6) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, SET);
	} else if (row==7) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, RESET);
	}
	HAL_GPIO_WritePin(PA15_GPIO_Port, PA15_Pin, 1 - (column & 1));
	column=column>>1;
	HAL_GPIO_WritePin(PA14_GPIO_Port, PA14_Pin, 1 - (column & 1));
	column=column>>1;
	HAL_GPIO_WritePin(PA13_GPIO_Port, PA13_Pin, 1 - (column & 1));
	column=column>>1;
	HAL_GPIO_WritePin(PA12_GPIO_Port, PA12_Pin, 1 - (column & 1));
	column=column>>1;
	HAL_GPIO_WritePin(PA11_GPIO_Port, PA11_Pin, 1 - (column & 1));
	column=column>>1;
	HAL_GPIO_WritePin(PA10_GPIO_Port, PA10_Pin, 1 - (column & 1));
	column=column>>1;
	HAL_GPIO_WritePin(PA3_GPIO_Port, PA3_Pin, 1 - (column & 1));
	column=column>>1;
	HAL_GPIO_WritePin(PA2_GPIO_Port, PA2_Pin, 1 - (column & 1));
	column=column>>1;
}

void updateLEDMatrix(int index) {
	switch (index) {
	case 0:
		displayLEDMatrix(index, matrix_buffer[index]);
		break;
	case 1:
		displayLEDMatrix(index, matrix_buffer[index]);
		break;
	case 2:
		displayLEDMatrix(index, matrix_buffer[index]);
		break;
	case 3:
		displayLEDMatrix(index, matrix_buffer[index]);
		break;
	case 4:
		displayLEDMatrix(index, matrix_buffer[index]);
		break;
	case 5:
		displayLEDMatrix(index, matrix_buffer[index]);
		break;
	case 6:
		displayLEDMatrix(index, matrix_buffer[index]);
		break;
	case 7:
		displayLEDMatrix(index, matrix_buffer[index]);
		break;
	default:
		break;
	}
}

void animation(int state, uint8_t *matrix_buffer) {
	switch (state) {
	case 0:
		matrix_buffer[0]=0x18;
		matrix_buffer[1]=0x3C;
		matrix_buffer[2]=0x66;
		matrix_buffer[3]=0x66;
		matrix_buffer[4]=0x7E;
		matrix_buffer[5]=0x7E;
		matrix_buffer[6]=0x66;
		matrix_buffer[7]=0x66;
		break;
	case 1:
		matrix_buffer[0]=0x30;
		matrix_buffer[1]=0x78;
		matrix_buffer[2]=0xCC;
		matrix_buffer[3]=0xCC;
		matrix_buffer[4]=0xFC;
		matrix_buffer[5]=0xFC;
		matrix_buffer[6]=0xCC;
		matrix_buffer[7]=0xCC;
		break;
	case 2:
		matrix_buffer[0]=0x60;
		matrix_buffer[1]=0xF0;
		matrix_buffer[2]=0x99;
		matrix_buffer[3]=0x99;
		matrix_buffer[4]=0xF9;
		matrix_buffer[5]=0xF9;
		matrix_buffer[6]=0x99;
		matrix_buffer[7]=0x99;
		break;
	case 3:
		matrix_buffer[0]=0xC0;
		matrix_buffer[1]=0xE1;
		matrix_buffer[2]=0x33;
		matrix_buffer[3]=0x33;
		matrix_buffer[4]=0xF3;
		matrix_buffer[5]=0xF3;
		matrix_buffer[6]=0x33;
		matrix_buffer[7]=0x33;
		break;
	case 4:
		matrix_buffer[0]=0x81;
		matrix_buffer[1]=0xC3;
		matrix_buffer[2]=0x66;
		matrix_buffer[3]=0x66;
		matrix_buffer[4]=0xE7;
		matrix_buffer[5]=0xE7;
		matrix_buffer[6]=0x66;
		matrix_buffer[7]=0x66;
		break;
	case 5:
		matrix_buffer[0]=0x03;
		matrix_buffer[1]=0x87;
		matrix_buffer[2]=0xCC;
		matrix_buffer[3]=0xCC;
		matrix_buffer[4]=0xCF;
		matrix_buffer[5]=0xCF;
		matrix_buffer[6]=0xCC;
		matrix_buffer[7]=0xCC;
		break;
	case 6:
		matrix_buffer[0]=0x06;
		matrix_buffer[1]=0x0F;
		matrix_buffer[2]=0x99;
		matrix_buffer[3]=0x99;
		matrix_buffer[4]=0x9F;
		matrix_buffer[5]=0x9F;
		matrix_buffer[6]=0x99;
		matrix_buffer[7]=0x99;
		break;
	case 7:
		matrix_buffer[0]=0x0C;
		matrix_buffer[1]=0x1E;
		matrix_buffer[2]=0x33;
		matrix_buffer[3]=0x33;
		matrix_buffer[4]=0x3F;
		matrix_buffer[5]=0x3F;
		matrix_buffer[6]=0x33;
		matrix_buffer[7]=0x33;
		break;
	default:
		break;
	}
}
