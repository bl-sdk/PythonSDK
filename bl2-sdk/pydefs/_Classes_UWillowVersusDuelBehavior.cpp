#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowVersusDuelBehavior(py::object m)
{
    py::class_< UWillowVersusDuelBehavior,  UBehaviorBase   >(m, "UWillowVersusDuelBehavior")
        .def("StaticClass", &UWillowVersusDuelBehavior::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UWillowVersusDuelBehavior::ApplyBehaviorToContext)
          ;
}