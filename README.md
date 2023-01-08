# NUCLEO_F439ZI project

This workspace contains necessary files for modifying, building and flashing software for **NUCLEO-F439ZI board**.  
Board
<a href="https://www.st.com/en/evaluation-tools/nucleo-f439zi.html">link</a>.  
Workspace is set up to be used in STM32CubeIDE environment.  

## Quick setup
Follow
<a href="https://github.com/Krle97/NUCLEO_F439ZI_workspace/blob/main/APPL/05_supporting/Project%20Setup.pdf">Project Setup.pdf</a>
guide.

## Necessary software tools

List of necessary software tools can be found in 
<a href="https://github.com/Krle97/NUCLEO_F439ZI_workspace/blob/main/APPL/05_supporting/Project%20Setup.pdf">Project Setup.pdf</a>
under "Necessary tools" paragraph.

## Directories
Here are listed all directories used within the project.

### 00_workspace

Contains linker script tailored for **NUCLEO-F439ZI board** and makefile which specifies how the project should be 
configured for a build. More information can be found in 
<a href="https://github.com/Krle97/NUCLEO_F439ZI_workspace/blob/main/APPL/05_supporting/Project%20Setup.pdf">Project Setup.pdf</a> 
under "Start new STM32 project" paragraph.

### 01_hw

Contains information about the hardware this project relies on.  
It is divided in subdirectories:
- 01_sch - schematics used in the project,
- 02_pcb - PCB layouts used in the project,
- 03_parts - other parts (such as sensors, actuators and more) used in the project.

### 02_sw

Contains source files used for modifying and building software as well as its documentation.  
It is divided in subdirectories:
- 01_code_generation - contains files and folders which are generated using STM32CubeMX generator. 
In order to generate files, open **APPL.ioc** file with STM32CubeMX generator outside of STM32CubeIDE.
- 02_src - contains hand written source code.
- 03_doc - contains documentation for hand written source code as well as scripts for generating it.

### 03_req

Contains requirement spreadsheets or links to requirement spreadsheets.  
It is divided in subdirectories:
- 01_sys - contains system requirements
- 02_sw - contains software requirements

### 04_testing

Contains necessary files for software testing.

### 05_supporting

Contains documentation which is intended to show how to perform various operations:
- building software, 
- flashing software to the MCU, 
- debugging software.  

It also provides information about certain topics:
- communication,
- coding guidelines, 
- task management.

