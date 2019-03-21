#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_ThrowGrenade()
{
    py::class_< UPlayerBehavior_ThrowGrenade,  UPlayerBehaviorBase   >("UPlayerBehavior_ThrowGrenade")
        .def("StaticClass", &UPlayerBehavior_ThrowGrenade::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UPlayerBehavior_ThrowGrenade::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}