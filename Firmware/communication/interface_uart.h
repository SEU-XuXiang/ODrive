#ifndef __INTERFACE_UART_HPP
#define __INTERFACE_UART_HPP

#ifdef __cplusplus
extern "C" {
#endif

#include <cmsis_os.h>

extern osThreadId uart_thread;

void serve_on_uart(void);

#ifdef __cplusplus
}
#endif

#endif // __INTERFACE_UART_HPP
