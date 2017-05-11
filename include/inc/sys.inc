
SYS_INT_NO		EQU		48

;0 ~ 49是无参调用
SYS_ZERO		EQU		0
SYS_PROC_NUM	EQU		1
SYS_WRITE_CLEAR	EQU		2

;50 ~ 99是单参调用
SYS_SINGLE		EQU		50
SYS_WRITE		EQU		51
SYS_PROC_PID	EQU		52

;100 ~ 149以上是双参调用
SYS_DOUBLE		EQU		100
SYS_ALERT_WRITE_COLOR	EQU	 101

;150以上为三参数调用
SYS_TREBLE		EQU		150
SYS_WRITE_COLOR	EQU		151
SYS_SEND_MESSAGE	EQU	152
SYS_RECV_MESSAGE	EQU	153

