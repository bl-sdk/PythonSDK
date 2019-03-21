#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCharacterClassMessageDefinition(py::object m)
{
    py::class_< UCharacterClassMessageDefinition,  UGBXDefinition   >(m, "UCharacterClassMessageDefinition")
        .def_readwrite("BehaviorTriggers", &UCharacterClassMessageDefinition::BehaviorTriggers)
        .def("StaticClass", &UCharacterClassMessageDefinition::StaticClass, py::return_value_policy::reference)
          ;
}