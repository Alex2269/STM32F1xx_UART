/* USER CODE BEGIN PV */
/* Private variables ---------------------------------------------------------*/
uint8_t dummy[9]="\r\nDUMMY\r\n";
uint8_t hello[9]="\r\nHello\r\n";
uint8_t test_str[7]= {0x44,0x45,0x46,0x47,0x48,0x49,0x50};
uint8_t data_rx[16]={0};
/* USER CODE END PV */
  /* USER CODE BEGIN 3 */
  HAL_UART_Receive(&huart1, data_rx, 16, 1000);
  HAL_Delay(10);

  if(data_rx[0]>5)
  HAL_UART_Transmit(&huart1, data_rx, 16, 100);
  HAL_Delay(10);

  if(data_rx[0]==1)
  HAL_UART_Transmit(&huart1, dummy, 9, 1);
  if(data_rx[0]==2)
  HAL_UART_Transmit(&huart1, hello, 9, 1);
  if(data_rx[0]==3)
  HAL_UART_Transmit(&huart1, test_str, 7, 1);
  HAL_Delay(10);
  data_rx[0]=0;
  }
  /* USER CODE END 3 */
