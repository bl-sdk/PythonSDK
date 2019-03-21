#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_StartDeathRagdoll()
{
    py::class_< UBehavior_StartDeathRagdoll,  UBehaviorBase   >("UBehavior_StartDeathRagdoll")
        .def("StaticClass", &UBehavior_StartDeathRagdoll::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_StartDeathRagdoll::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}