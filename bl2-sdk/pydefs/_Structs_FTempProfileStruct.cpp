#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTempProfileStruct()
{
    class_< FTempProfileStruct >("FTempProfileStruct", no_init)
        .def_readwrite("Allegiance", &FTempProfileStruct::Allegiance)
        .def_readwrite("Health", &FTempProfileStruct::Health)
        .def_readwrite("Shield", &FTempProfileStruct::Shield)
        .def_readwrite("Weapons", &FTempProfileStruct::Weapons)
  ;
}