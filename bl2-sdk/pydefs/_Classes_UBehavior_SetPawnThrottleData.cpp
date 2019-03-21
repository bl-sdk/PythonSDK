#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetPawnThrottleData(py::object m)
{
    py::class_< UBehavior_SetPawnThrottleData,  UBehaviorBase   >(m, "UBehavior_SetPawnThrottleData")
        .def_readwrite("FullThrottleDistance", &UBehavior_SetPawnThrottleData::FullThrottleDistance)
        .def_readwrite("FullThrottleTime", &UBehavior_SetPawnThrottleData::FullThrottleTime)
        .def_readwrite("MinThrottleDistance", &UBehavior_SetPawnThrottleData::MinThrottleDistance)
        .def_readwrite("MaxThrottleDistance", &UBehavior_SetPawnThrottleData::MaxThrottleDistance)
        .def_readwrite("MinThrottleTime", &UBehavior_SetPawnThrottleData::MinThrottleTime)
        .def_readwrite("MaxThrottleTime", &UBehavior_SetPawnThrottleData::MaxThrottleTime)
        .def("StaticClass", &UBehavior_SetPawnThrottleData::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetPawnThrottleData::ApplyBehaviorToContext)
          ;
}