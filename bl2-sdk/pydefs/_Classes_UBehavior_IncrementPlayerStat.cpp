#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_IncrementPlayerStat()
{
    py::class_< UBehavior_IncrementPlayerStat,  UBehaviorBase   >("UBehavior_IncrementPlayerStat")
        .def_readwrite("StatId", &UBehavior_IncrementPlayerStat::StatId)
        .def_readwrite("IncAmount", &UBehavior_IncrementPlayerStat::IncAmount)
        .def("StaticClass", &UBehavior_IncrementPlayerStat::StaticClass, py::return_value_policy::reference)
        .def("ResolveController", &UBehavior_IncrementPlayerStat::ResolveController, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_IncrementPlayerStat::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}