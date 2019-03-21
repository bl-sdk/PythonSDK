#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTempProfileStruct()
{
    py::class_< FTempProfileStruct >("FTempProfileStruct")
        .def_readwrite("Allegiance", &FTempProfileStruct::Allegiance)
        .def_readwrite("Health", &FTempProfileStruct::Health)
        .def_readwrite("Shield", &FTempProfileStruct::Shield)
        .def_readwrite("Weapons", &FTempProfileStruct::Weapons)
  ;
}