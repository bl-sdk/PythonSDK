#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DestroyBeams(py::object m)
{
    py::class_< UBehavior_DestroyBeams,  UBehaviorBase   >(m, "UBehavior_DestroyBeams")
        .def_readwrite("TargetContext", &UBehavior_DestroyBeams::TargetContext)
        .def("StaticClass", &UBehavior_DestroyBeams::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_DestroyBeams::ApplyBehaviorToContext)
          ;
}