#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetDemigodMode(py::module &m)
{
    py::class_< UBehavior_SetDemigodMode,  UBehaviorBase   >(m, "UBehavior_SetDemigodMode")
        .def_readwrite("Status", &UBehavior_SetDemigodMode::Status)
        .def("StaticClass", &UBehavior_SetDemigodMode::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetDemigodMode::ApplyBehaviorToContext)
          ;
}