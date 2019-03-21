#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_GetPlayerStat()
{
    py::class_< UBehavior_GetPlayerStat,  UBehaviorBase   >("UBehavior_GetPlayerStat")
        .def_readwrite("StatId", &UBehavior_GetPlayerStat::StatId)
        .def("StaticClass", &UBehavior_GetPlayerStat::StaticClass, py::return_value_policy::reference)
        .def("PublishBehaviorOutput", &UBehavior_GetPlayerStat::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_GetPlayerStat::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}