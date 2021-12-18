	      INT 0, 12
	      SUP 0, main
	      RET 0, 0
main:
	      INT 0, 16
	      LDA 1, 12
	     LITI 0, 0
	      STX 0, 1
	      POP 0, 1
	      LDA 1, 12
	     LITI 0, 0
	      STX 0, 1
	      POP 0, 1
L2:
	      LOD 1, 12
	     LITI 0, 10
	     LSSI 0, 0
	      JPC 0, L3
	      LOD 1, 12
	     LITI 0, 1
	     EQLI 0, 0
	      JPC 0, L4
	      JMP 0, L3
L4:
L1:
	      LOD 1, 12
	      LDA 1, 12
	      LDX 0, 1
	     INCI 0, 0
	      STO 0, 1
	      POP 0, 1
	      JMP 0, L2
L3:
	      RET 0, 0
