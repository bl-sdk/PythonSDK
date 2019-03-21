#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxGlobalsDefinition()
{
    py::class_< UGearboxGlobalsDefinition,  UGBXDefinition   >("UGearboxGlobalsDefinition")
        .def_readwrite("RespawnDelayInSeconds", &UGearboxGlobalsDefinition::RespawnDelayInSeconds)
        .def_readwrite("Dialog", &UGearboxGlobalsDefinition::Dialog)
        .def("StaticClass", &UGearboxGlobalsDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}