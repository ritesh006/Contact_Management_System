cmake_minimum_required(VERSION 3.15) #version that required process

project(Contact_Managment_System)            #project name


add_library(contact SHARED driverCode/menuDisplay.c 
driverCode/operationLogic.c driverCode/chooseOption.c
driverCode/contactCreation.c) #contact is a lib name 
# here it will generate libcontact.so is a static libray
add_executable(a.out main.c)

target_link_libraries(a.out contact)
#linking a.out to lib contact