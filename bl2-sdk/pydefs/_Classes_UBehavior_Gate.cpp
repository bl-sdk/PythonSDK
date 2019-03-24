#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_Gate(py::module &m)
{
    py::class_< UBehavior_Gate,  UBehaviorBase   >(m, "UBehavior_Gate")
		.def_static("StaticClass", &UBehavior_Gate::StaticClass, py::return_value_policy::reference)
        .def_readwrite("GateCount", &UBehavior_Gate::GateCount)
        .def_readwrite("ActivationCount", &UBehavior_Gate::ActivationCount)
        .def("ApplyBehaviorToContext", &UBehavior_Gate::ApplyBehaviorToContext)
          ;
}