# What is an Instruction Set Architecture?

- Defines the software interface for hardware
- **Single ISA** -> Many hardware implementations
- An __ISA__ specification may be for general purpose microprocessor, DSPs, specialized hardware operations.
- An ISA creates it's own software ecosystem. (x86, ARM, IBM 360)

# What is included in an ISA?

+ Set of instruction, how they behave
+ Data Types
+ Registers
+ Addressing modes
+ Memory model
+ How Input/ Output is done
+ Virtual Memory
+ Exceptions


# What is RISC V?

RISC V is **A Well organized ISA** devided into _categories and extensions_.

# Origin of RISC V

In 2010 at **UC Berkeley**, **Kryste Asanovic** started the design as a 3-momth summer project.

Principal designers:
- Andrew Waterman
- Yunsup Lee
- David Patterson
- Kryste Asanovic


May 2014: the base user spec released after many iterations.

**RISC-V is the 5th ISA designed at Berkeley**

- RISC-1(1981)
- RISC-2(1983)
- RISC-3(1984)
- RISC-4(1988)
- RISC-5(2011)


# Why RISC-V?

+ Simplicity(RISC arch)
+ Open Source
	- No IP or liscence restrictions
+ New Business model
+ On par with modern CPUS(performance, code density, power consumption)


# RISC-V ISA
RV N (Extension Letter)

Base ISAs:
- RV32E(2 registers of 16 bit)
- RV32I
- RV64I
- RV128I


Standard Extensions:
- M: Math
- A: Atomic Ops
- F: Floating Point
- D: Double Precision FP
- G: General Purpose


# Implementation

This example uses RV32I

**RV32I**: RISC-V 32-bit integer ISA
Registers: x0 - x31 (x0 is hardwired to 0)
Registers are 32-bit wide (1 word)
32-bit address space

### First Instruction

syntax of instruction in risc-v

>> (OpCode) (Destination Register) (Source Register1) (Source Register 2)

```
add rd, rs1, rs2
```

