#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_FailMission(py::module &m)
{
    py::class_< UBehavior_FailMission,  UBehaviorBase   >(m, "UBehavior_FailMission")
        .def("StaticClass", &UBehavior_FailMission::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_FailMission::ApplyBehaviorToContext)
          ;
}