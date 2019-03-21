#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ShowSelfAsTarget()
{
    py::class_< UBehavior_ShowSelfAsTarget,  UBehaviorBase   >("UBehavior_ShowSelfAsTarget")
        .def("StaticClass", &UBehavior_ShowSelfAsTarget::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ShowSelfAsTarget::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}