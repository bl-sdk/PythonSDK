#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DestroyBeams(py::module &m)
{
    py::class_< UBehavior_DestroyBeams,  UBehaviorBase   >(m, "UBehavior_DestroyBeams")
		.def_static("StaticClass", &UBehavior_DestroyBeams::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TargetContext", &UBehavior_DestroyBeams::TargetContext)
        .def("ApplyBehaviorToContext", &UBehavior_DestroyBeams::ApplyBehaviorToContext)
          ;
}