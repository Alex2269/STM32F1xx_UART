/* USER CODE BEGIN PV */
/* Private variables ---------------------------------------------------------*/
uint8_t dummy[9]="\r\nDUMMY\r\n";
uint8_t hello[9]="\r\nHello\r\n";
uint8_t test_str[7]= {0x44,0x45,0x46,0x47,0x48,0x49,0x50};
uint8_t data_rx[16]={0};
uint8_t *p_data_rx = data_rx;
//p_data_rx= data_rx;
/* USER CODE END PV */
  /* USER CODE BEGIN 2 */
  // __HAL_UART_ENABLE_IT(&huart1, UART_IT_RXNE); //UART_IT_RXNE: Receive Data register not empty interrupt
  // __HAL_UART_ENABLE_IT(&huart1, UART_IT_TC); //UART_IT_TC: Transmission complete interrupt
  /* USER CODE END 2 */
  /* USER CODE BEGIN 3 */
  HAL_UART_Receive_IT(&huart1, p_data_rx, 1);

  if(*p_data_rx>5)  // data_rx[i] == *(data_rx + i);
  HAL_UART_Transmit_IT(&huart1, p_data_rx, 1);
  if(*p_data_rx==1)
  HAL_UART_Transmit_IT(&huart1, dummy, 9);
  if(*p_data_rx==2)
  HAL_UART_Transmit_IT(&huart1, hello, 9);
  if(*p_data_rx==3)
  HAL_UART_Transmit_IT(&huart1, test_str, 7);
  *p_data_rx=0;
  }
  /* USER CODE END 3 */
