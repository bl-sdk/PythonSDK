#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_StartMissionTimer(py::module &m)
{
    py::class_< UBehavior_StartMissionTimer,  UBehaviorBase   >(m, "UBehavior_StartMissionTimer")
        .def("StaticClass", &UBehavior_StartMissionTimer::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_StartMissionTimer::ApplyBehaviorToContext)
          ;
}