#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AIHold(py::module &m)
{
    py::class_< UBehavior_AIHold,  UBehaviorBase   >(m, "UBehavior_AIHold")
        .def_readwrite("Reason", &UBehavior_AIHold::Reason)
        .def_readwrite("Action", &UBehavior_AIHold::Action)
        .def_readwrite("Type", &UBehavior_AIHold::Type)
        .def("StaticClass", &UBehavior_AIHold::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AIHold::ApplyBehaviorToContext)
          ;
}