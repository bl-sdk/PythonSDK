#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AddMissionTime(py::module &m)
{
    py::class_< UBehavior_AddMissionTime,  UBehaviorBase   >(m, "UBehavior_AddMissionTime")
        .def_readwrite("SecondsToAdd", &UBehavior_AddMissionTime::SecondsToAdd)
        .def("StaticClass", &UBehavior_AddMissionTime::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AddMissionTime::ApplyBehaviorToContext)
          ;
}