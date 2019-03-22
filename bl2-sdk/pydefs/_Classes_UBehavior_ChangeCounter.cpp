#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeCounter(py::module &m)
{
    py::class_< UBehavior_ChangeCounter,  UBehaviorBase   >(m, "UBehavior_ChangeCounter")
        .def_readwrite("CounterId", &UBehavior_ChangeCounter::CounterId)
        .def_readwrite("CounterAdjustment", &UBehavior_ChangeCounter::CounterAdjustment)
        .def_readwrite("NewCounterValue", &UBehavior_ChangeCounter::NewCounterValue)
        .def_readwrite("NewCounterTarget", &UBehavior_ChangeCounter::NewCounterTarget)
        .def("StaticClass", &UBehavior_ChangeCounter::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeCounter::ApplyBehaviorToContext)
          ;
}