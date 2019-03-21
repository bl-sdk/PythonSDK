#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_UpdateCollision()
{
    py::class_< UBehavior_UpdateCollision,  UBehaviorBase   >("UBehavior_UpdateCollision")
        .def("StaticClass", &UBehavior_UpdateCollision::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_UpdateCollision::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}