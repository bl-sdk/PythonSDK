#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowVersusDuelBehavior()
{
    py::class_< UWillowVersusDuelBehavior,  UBehaviorBase   >("UWillowVersusDuelBehavior")
        .def("StaticClass", &UWillowVersusDuelBehavior::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UWillowVersusDuelBehavior::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}