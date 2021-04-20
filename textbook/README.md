![Image](notebooks/images/LibKet.png?raw=true)

# LibKet - The Quantum Expression Template Library

**LibKet** (pronounced lib-ket) is a lightweight [expression
template](https://en.wikipedia.org/wiki/Expression_templates) library
written in modern C++14 that provides building blocks for the rapid
prototyping of quantum algorithms and their efficient testing on
different quantum computer simulators and hardware platforms. These
building blocks are quantum bits, so-called
[qubits](https://en.wikipedia.org/wiki/Qubit), [quantum
registers](https://en.wikipedia.org/wiki/Quantum_register), [quantum
logic gates](https://en.wikipedia.org/wiki/Quantum_logic_gate), and
some basic [quantum
algorithms](https://en.wikipedia.org/wiki/Quantum_algorithm) like the
[Quantum Fourier
Transform](https://en.wikipedia.org/wiki/Quantum_Fourier_transform)
(QFT) and its inverse operation, which are both widely used in
advanced quantum algorithms.

**LibKet** makes it possible to formulate quantum algorithms in a more
abstract way than this is typically possible in other quantum
computing SDKs, which require you to express quantum algorithms using
low-level quantum gates and are often restricted to a particular
quantum assembly or instruction language. In contrast, **LibKet**
allows you to implement quantum algorithms as generic quantum
expressions that can be executed on different quantum computer
simulators and hardware plaforms.

## Tutorials

* [Mini-tutorial at SIAM Conference on Computational Science and Engineering (CSE21)](tutorials/CSE21/README.md)
