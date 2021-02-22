[![SIAM CSE21](SIAM_CSE21.png)](https://www.siam.org/conferences/cm/conference/cse21)

# Mini-tutorial at SIAM CSE21, March 1-5, 2021

**LibKet: A Software Framework for Quantum-Accelerated Scientific Computing**

*Organizers: Carmina G. Almudever, Matthias Möller*

---

## Session 1: Monday, March 1, 9:45 a.m. – 11:25 a.m. CST

| Time        | Content                                                                                   | Lecturer | Slides | Notebook |
| ----------: | :---------------------------------------------------------------------------------------- | :------- | :----: | :------: |
|  9:45-09:55 | [Quantum-accelerated scientific computing](#quantum-accelerated-scientific-computing)     | Matthias | slides |          |
| 09:55-11:25 | [Hands-on introduction to quantum computing with LibKet](#hands-on-introduction-to-quantum-computing-with-libket) | Carmina/Matthias | slides | [![Binder](https://mybinder.org/badge_logo.svg)](https://mybinder.org/v2/gh/mmoelle1/LibKet/master?filepath=notebooks%2Fcxx%2Fcse21_tutorial01.ipynb) 

## Session 2: Monday, March 1, 2:15 p.m. – 3:55 p.m. CST 

| Time        | Content                                                                                                       | Lecturer | Slides | Notebook |
| ----------: | :------------------------------------------------------------------------------------------------------------ | :------- | :----: | :------: |
|  2:15-3:00  | [Quantum computing today and future perspective](#quantum-computing-today-and-future-perspective)             | Carmina  | slides |
|  3:00-3:35  | [Hands-on scientific computing with LibKet](#hands-on-scientific-computing-with-libket)                       | Matthias | slides | [![Binder](https://mybinder.org/badge_logo.svg)](https://mybinder.org/v2/gh/mmoelle1/LibKet/master?filepath=notebooks%2Fcxx%2Fcse21_tutorial02.ipynb) |
|  3:35-3:55  | [Selected quantum-accelerated applications in CSE](#selected-quantum-accelerated-applications-in-cse)         | Matthias | slides |          |

---

### Quantum-accelerated scientific computing

* History of (accelerated) computing
  * distributed parallel computing
  * GPU-/FPGA-accelerated computing
  * Quantum-accelerated computing
  
* Possible applications for quantum-accelerated computing
  * Linear solvers HHL/VQLS
  * Differential equations
  * ...

### Hands-on introduction to quantum computing with LibKet

CARMINA: please add
* Design philosophy (LibKet, the CUDA for quantum-accelerated computing)
* Computational building blocks
  * Filters
  * Gates
  * Circuits
  * Offloading to quantum devices

### Quantum computing today and future perspective

* Available quantum systems
  * Quantum-Inspire
  * IBM Quantum Experience
  * Rigetti and ionQ via Amazon AWS Braket

* Challenges of the NISQ era

* Quantum supremacy and fault tolerance

### Hands-on scientific computing with LibKet

* Development and testing of quantum algorithms on real quantum devices

* Hybrid classical-quantum applications

* Extending LibKet with advanced quantum algorithms

### Selected quantum-accelerated applications in CSE

* HHL/VQLS quantum linear solvers for the Poisson problem
