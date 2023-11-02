#ifndef __RTTHREAD_CFG_H__
#define __RTTHREAD_CFG_H__

/******************************************************************************/
/* 表示内核对象的名称的最大长度，若代码中对象名称的最大长度大于宏定义的长度，
 * 多余的部分将被截掉。*/
#define RT_NAME_MAX 8

/* 字节对齐时设定对齐的字节个数。常使用 ALIGN(RT_ALIGN_SIZE) 进行字节对齐。*/
#define RT_ALIGN_SIZE 4

/* 定义系统线程优先级数；通常用 RT_THREAD_PRIORITY_MAX-1 定义空闲线程的优先级 */
#define RT_THREAD_PRIORITY_MAX 32

/* 定义时钟节拍，为 100 时表示 100 个 tick 每秒，一个 tick 为 10ms */
#define RT_TICK_PER_SECOND 1000

/* 检查栈是否溢出，未定义则关闭 */
// #define RT_USING_OVERFLOW_CHECK

/* 定义该宏开启 debug 模式，未定义则关闭 */
// #define RT_DEBUG
/* 开启 debug 模式时：该宏定义为 0 时表示关闭打印组件初始化信息，定义为 1 时表示启用 */
#define RT_DEBUG_INIT 0
/* 开启 debug 模式时：该宏定义为 0 时表示关闭打印线程切换信息，定义为 1 时表示启用 */
#define RT_DEBUG_THREAD 0

/* 定义该宏表示开启钩子函数的使用，未定义则关闭 */
// #define RT_USING_HOOK

/* 定义了空闲线程的栈大小 */
#define IDLE_THREAD_STACK_SIZE 256

/******************************************************************************/
/* 定义该宏可开启信号量的使用，未定义则关闭 */
// #define RT_USING_SEMAPHORE

/* 定义该宏可开启互斥量的使用，未定义则关闭 */
// #define RT_USING_MUTEX

/* 定义该宏可开启事件集的使用，未定义则关闭 */
// #define RT_USING_EVENT

/* 定义该宏可开启邮箱的使用，未定义则关闭 */
// #define RT_USING_MAILBOX

/* 定义该宏可开启消息队列的使用，未定义则关闭 */
// #define RT_USING_MESSAGEQUEUE

/* 定义该宏可开启信号的使用，未定义则关闭 */
// #define RT_USING_SIGNALS

/******************************************************************************/
/* 开启静态内存池的使用 */
// #define RT_USING_MEMPOOL

/* 定义该宏可开启两个或以上内存堆拼接的使用，未定义则关闭 */
// #define RT_USING_MEMHEAP

/* 开启小内存管理算法 */
// #define RT_USING_SMALL_MEM

/* 关闭 SLAB 内存管理算法 */
/* #define RT_USING_SLAB */

/* 开启堆的使用 */
// #define RT_USING_HEAP

/******************************************************************************/
/* 表示开启了系统设备的使用 */
// #define RT_USING_DEVICE

/* 定义该宏可开启系统控制台设备的使用，未定义则关闭 */
#define RT_USING_CONSOLE
/* 定义控制台设备的缓冲区大小 */
#define RT_CONSOLEBUF_SIZE 128
/* 控制台设备的名称 */
// #define RT_CONSOLE_DEVICE_NAME "uart1"

/******************************************************************************/
/* 定义该宏开启自动初始化机制，未定义则关闭 */
#define RT_USING_COMPONENTS_INIT

/* 定义该宏开启设置应用入口为 main 函数 */
#define RT_USING_USER_MAIN
/* 定义 main 线程的栈大小 */
#define RT_MAIN_THREAD_STACK_SIZE 2048

/******************************************************************************/
#define RT_USING_LIBC

#define RT_USING_HW_ATOMIC

#endif
