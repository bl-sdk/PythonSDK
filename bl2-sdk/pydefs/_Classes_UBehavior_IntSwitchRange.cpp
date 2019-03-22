#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_IntSwitchRange(py::module &m)
{
    py::class_< UBehavior_IntSwitchRange,  UBehaviorBase   >(m, "UBehavior_IntSwitchRange")
        .def_readwrite("CheckValue", &UBehavior_IntSwitchRange::CheckValue)
        .def_readwrite("RangeMin", &UBehavior_IntSwitchRange::RangeMin)
        .def_readwrite("RangeMax", &UBehavior_IntSwitchRange::RangeMax)
        .def("StaticClass", &UBehavior_IntSwitchRange::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_IntSwitchRange::ApplyBehaviorToContext)
          ;
}