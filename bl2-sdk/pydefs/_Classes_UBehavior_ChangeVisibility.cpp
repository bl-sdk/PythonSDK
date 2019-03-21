#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeVisibility()
{
    py::class_< UBehavior_ChangeVisibility,  UBehaviorBase   >("UBehavior_ChangeVisibility")
        .def_readwrite("Status", &UBehavior_ChangeVisibility::Status)
        .def("StaticClass", &UBehavior_ChangeVisibility::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeVisibility::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}