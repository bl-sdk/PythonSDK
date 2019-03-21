#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AIPatsy()
{
    py::class_< UBehavior_AIPatsy,  UBehaviorBase   >("UBehavior_AIPatsy")
        .def_readwrite("Patsy", &UBehavior_AIPatsy::Patsy)
        .def("StaticClass", &UBehavior_AIPatsy::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AIPatsy::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}