## Title of the project
Zoo Animals, Design Patterns and UML Diagrams- Project 2 of OOAD

## Team members
1. Jitendra Marndi
2. Madhusudhan Aithal Mahabhaleshwara
3. Raj Chandak

## Build Instructions
This project is written in C++. The code can be compiled with any C++ compiler with support of C++11 or later. We have used GCC version 8.2.1 compiler on CentOS 8 to build and test the program. Makefile provided here makes building and testing easy. Follow following steps sequentially to get the source code, build and test the program.

1. In a command line terminal, run the below code to clone this repository.
```
git clone git@github.com:MasterJEET/zoo.git
```
2. Now `cd` into the 'zoo' directory and type `make`. This will create an executable.
```
cd zoo
make
```
3. Now program is ready for execution.
```
./zoo
```
4. To record output of the program into a file, type
```
make test
```
Above command will write output of the program to the file 'dayatthezoo.out'.
## Implementation Details
In this section we briefly describe the directory structure and files and their relevance in the context of implementation of 'Strategy' and 'Observer' patterns.
All the header files which contain class declaration (definition as well in some cases) reside in `inc` directory. All the definitions (not defined in header files) of classes are kept in `src` directory. Furthermore, all classes (headers only) representing animal species have been kept in `inc/animals/animalspecies`. Similarly corresponding source files (.cpp) have been kept in `src/animals/animalspecies`. Note that NOT all classes have corresponding source file. RoamBehaviour and NoiseBehaviour can be found inside `roam` and `noise` folders.
### Strategy Pattern
Both the roaming behavior and the sound of animals have been implemented using 'Strategy pattern'. For this `RoamBehaviour` and `NoiseBehaviour` interfaces have been created. `Walk`, `Run` and `Sprint` classes implement `RoamBehaviour` and similarly `Meow`, `Roar`, `Snarl`, `Bark`, `Howl`, `Trumpet`, `Growl` and `Grunt` classes implement `NoiseBehaviour`. `Animal` class has one member each for `RoamBehaviour` and `NoiseBehaviour`. The setter methods have been provided in `Animal` class to set these behaviors.
### Observer Pattern
For this one `Observable` interface and one `Observer` interface have been created. `Observable` has three public method declarations: `RegisterObserver`, `RemoveObserver` and `NotifyObservers`. `Zookeeper` class, which implements the `Observable` interface, implements these functions. Similarly `Observer` has one public method `Update` which is implemented by the new class `ZooAnnouncer`.
<br>
Corresponding files for all the interfaces and classes can be found in the source code directory as described earlier.
