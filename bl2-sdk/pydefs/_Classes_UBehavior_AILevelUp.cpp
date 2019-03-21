#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AILevelUp()
{
    py::class_< UBehavior_AILevelUp,  UBehaviorBase   >("UBehavior_AILevelUp")
        .def_readwrite("MaxLevelUps", &UBehavior_AILevelUp::MaxLevelUps)
        .def("StaticClass", &UBehavior_AILevelUp::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AILevelUp::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}