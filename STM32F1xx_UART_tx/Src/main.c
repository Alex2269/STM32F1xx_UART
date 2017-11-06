/* USER CODE BEGIN PV */
/* Private variables ---------------------------------------------------------*/
uint8_t dummy[9]="\r\nDUMMY\r\n";
uint8_t hello[9]="\r\nHello\r\n";
uint8_t test_str[7]= {0x44,0x45,0x46,0x47,0x48,0x49,0x50};
/* USER CODE END PV */
  /* USER CODE BEGIN 3 */
    HAL_UART_Transmit(&huart1, dummy, 9, 1);
    HAL_Delay(1250);
    HAL_UART_Transmit(&huart1, test_str, 7, 1);
    HAL_Delay(1250);
    HAL_UART_Transmit(&huart1, hello, 9, 1);
    HAL_Delay(1250);
  }
  /* USER CODE END 3 */
