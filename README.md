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
| 0903.KEY_CHATTERING_EX | 외부 스위치를 이용한 LED Toggle 구현 | Chattering정의 및 해결법 : Debouncing |
| 1001.UART_ECHOBACK | UART통신을 통한 문자 주고 받기 | UARTx->CR, SR 및 DR (RX, TX Buffer) |
| 1002.UART_DRIVER_LAB | UART2통신을 위한 Init함수 설계 및 사용 | UART2->CR 설정 및 SR을 통한 Buffer 감시 |
| 1101.SYSTICK_TIMER_LAB | SysTick 예제를 통한 타이머 이해 | Timer 이해 |
| 1103.TIMER_OUTPUT_LAB | TIMx에 대한 이해와 이를 이용한 PWM 발생 및 버저 동작 | PSC(prescaler), CNT(count) - ARR, EGR, CCR, PWM |
| 1201.EXTI_IRQ_LAB | 15_10IRQHandler함수로 Interrupt 작동 확인하기 | Interrupt작동 이해 |
| 1202.EXTI_EVENT_EX | Interrupt 설정 및 이용 방식 2가지 | EXIT->(IMR, EMR, RTSR, FTSR, PR), pending clear(flag 초기화 : 1), NVIC, Interrupt Based Programing, Event Driven |
| 1203.UART_EVENT_LAB | UART2의 RX Buffer에 데이터 입력 시 `Uart_Data_In = 1` | Event Driven, UART Interrupt |
| 1204.TIMER_EVENT_LAB | Timer Interrupt를 통한 Delay없는 LED On / Off | Timer Interrupt |
| 1205.IRQ_NESTING_EX| Interrupt 우선 순위의 중요성 | Interrupt 우선순위 |
| 1301.I2C_IF_EX | I2C Protocol(프레임 구조), SDA, SCL, 저속 통신, BUS_EXT 보드 LED 제어, BUS 개념 | I2C, BUS, I2C Address |
| 1401.SPI_IF_EX | SPI Protocol(프레임 구조), CS, MOSI, MISO, CLK, 고속 통신 | SPI |
| 1501.ADC_EX | 주변 장치 Analog Digital Converter의 이해 및 실습 | ADC |
| 1601.DMA_EX | DMA의 개념과 작동 원리 이해 | DMA |
- 보드: STM32F411RE / 개발 환경: VSCode
