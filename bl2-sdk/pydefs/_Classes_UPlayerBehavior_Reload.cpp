#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_Reload()
{
    py::class_< UPlayerBehavior_Reload,  UPlayerBehaviorBase   >("UPlayerBehavior_Reload")
        .def("StaticClass", &UPlayerBehavior_Reload::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UPlayerBehavior_Reload::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}