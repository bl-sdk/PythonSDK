#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIBodyPawn(py::module &m)
{
    py::class_< UIBodyPawn,  UInterface   >(m, "UIBodyPawn")
        .def("GetAWillowAIPawn", &UIBodyPawn::GetAWillowAIPawn, py::return_value_policy::reference)
        .def("GetAWillowPlayerPawn", &UIBodyPawn::GetAWillowPlayerPawn, py::return_value_policy::reference)
        .def("GetAWillowPawn", &UIBodyPawn::GetAWillowPawn, py::return_value_policy::reference)
          ;
}