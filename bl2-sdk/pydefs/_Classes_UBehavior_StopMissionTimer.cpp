#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_StopMissionTimer(py::module &m)
{
    py::class_< UBehavior_StopMissionTimer,  UBehaviorBase   >(m, "UBehavior_StopMissionTimer")
        .def("ApplyBehaviorToContext", &UBehavior_StopMissionTimer::ApplyBehaviorToContext)
          ;
}