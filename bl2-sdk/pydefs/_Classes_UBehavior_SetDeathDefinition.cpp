#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetDeathDefinition()
{
    py::class_< UBehavior_SetDeathDefinition,  UBehaviorBase   >("UBehavior_SetDeathDefinition")
        .def_readwrite("NewDeathDefinition", &UBehavior_SetDeathDefinition::NewDeathDefinition)
        .def("StaticClass", &UBehavior_SetDeathDefinition::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetDeathDefinition::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}