#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_RotatePawn(py::module &m)
{
    py::class_< UBehavior_RotatePawn,  UBehaviorBase   >(m, "UBehavior_RotatePawn")
		.def_static("StaticClass", &UBehavior_RotatePawn::StaticClass, py::return_value_policy::reference)
        .def_readwrite("RotateDirection", &UBehavior_RotatePawn::RotateDirection)
        .def_readwrite("Time", &UBehavior_RotatePawn::Time)
        .def("ApplyBehaviorToContext", &UBehavior_RotatePawn::ApplyBehaviorToContext)
          ;
}