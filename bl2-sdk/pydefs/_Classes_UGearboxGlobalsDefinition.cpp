#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxGlobalsDefinition(py::module &m)
{
    py::class_< UGearboxGlobalsDefinition,  UGBXDefinition   >(m, "UGearboxGlobalsDefinition")
		.def_static("StaticClass", &UGearboxGlobalsDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("RespawnDelayInSeconds", &UGearboxGlobalsDefinition::RespawnDelayInSeconds)
        .def_readwrite("Dialog", &UGearboxGlobalsDefinition::Dialog)
          ;
}