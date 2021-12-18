	      INT 0, 28
	      SUP 0, main
	      RET 0, 0
func11:
	      INT 0, 16
	      INT 0, 12
	      LDA 0, 12
	      POP 0, 4
	     ADDR 0, printf
	      CAL 0, 0
	      RET 0, 0
main:
	      INT 0, 12
	      INT 0, 12
	      POP 0, 3
	     ADDR 0, func11
	      CAL 0, 0
	      LDA 1, -4
	     LITI 0, 0
	      STO 0, 1
	      RET 0, 0
	      RET 0, 0
.literal    12 "func11 called"
