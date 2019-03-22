#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AISetFlight(py::module &m)
{
    py::class_< UBehavior_AISetFlight,  UBehaviorBase   >(m, "UBehavior_AISetFlight")
        .def_readwrite("Mode", &UBehavior_AISetFlight::Mode)
        .def("ApplyBehaviorToContext", &UBehavior_AISetFlight::ApplyBehaviorToContext)
          ;
}