#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SpecialMoveStop()
{
    py::class_< UBehavior_SpecialMoveStop,  UBehaviorBase   >("UBehavior_SpecialMoveStop")
        .def_readwrite("SpecificMove", &UBehavior_SpecialMoveStop::SpecificMove)
        .def("StaticClass", &UBehavior_SpecialMoveStop::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SpecialMoveStop::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}