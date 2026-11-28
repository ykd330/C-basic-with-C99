# ARM Cortex-M4 core with STM32F411xE

온디바이스AI SW개발 과정의 Cortex-M 펌웨어 실습 코드입니다.

| 폴더 | 내용 | 핵심 개념 |
|---|---|---|
| 0501.LED_ON_LAB | LED On | GPIO Register 설정 |
| 0601.TYPE_QUALIFIER_EX | 컴파일러 최적화에 의한 버그 방지 | Volatile 이해 |
| 0602.CMSIS_LAB | 제조사의 CMSIS정의 정의 헤더파일 | CMSIS정의 |
| 0701.BIT_OP_LAB | 비트연산으로 레지스터 제어 | **<<**, **>>**, **|**, **&** |
| 0801.CLOCK_CONFIG_EX | 주변 장치를 활성화 시키기 위한 CLOCK 설정 | RCC Register 이해 |
| 0901.KEY_IN_LAB | 내부 스위치(PC13)를 누르면 LED On | GPIOx->IDR, Pullup, Pulldown 저항 |
| 0902.KEY_DRIVER_LAB | 내부 스위치를 이용한 LED Toggle 구현 | Interlock 방법 |
| 0903.KEY_CHATTERING_EX | 외부 스위치를 이용한 LED Toggle 구현 | Chattering정의 및 해결법 |
| 1001.UART_ECHOBACK | 모터 속도 제어 | 타이머 PWM, 듀티비 |
| 1002.UART_DRIVER_LAB | LED 점멸 | GPIO 출력 |
| 1101.SYSTICK_TIMER_LAB | 버튼으로 LED 토글 | 외부 인터럽트, 디바운싱 |
| 1103.TIMER_OUTPUT_LAB | PC와 문자 주고받기 | UART, 링 버퍼 |
| 1201.EXTI_EVERNT_EX | 모터 속도 제어 | 타이머 PWM, 듀티비 |
| 1202.EXTI_EVENT_EX | LED 점멸 | GPIO 출력 |
| 1203.UART_EVENT_LAB | 버튼으로 LED 토글 | 외부 인터럽트, 디바운싱 |
| 1204.TIMER_EVENT_LAB | PC와 문자 주고받기 | UART, 링 버퍼 |
| 1205.IRQ_NESTING_EX| 모터 속도 제어 | 타이머 PWM, 듀티비 |
| 1301.I2C_IF_EX | 모터 속도 제어 | 타이머 PWM, 듀티비 |
| 1401.SPI_IF_EX | LED 점멸 | GPIO 출력 |
| 1501.ADC_EX | 버튼으로 LED 토글 | 외부 인터럽트, 디바운싱 |
| 1601.DMA_EX | PC와 문자 주고받기 | UART, 링 버퍼 |




- 보드: STM32F411RE / 개발 환경: VSCode
