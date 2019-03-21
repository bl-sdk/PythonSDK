#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSavedMove()
{
    py::class_< UWillowSavedMove,  USavedMove   >("UWillowSavedMove")
        .def("StaticClass", &UWillowSavedMove::StaticClass, py::return_value_policy::reference)
        .def("SetFlags", &UWillowSavedMove::SetFlags)
        .def("CompressedFlags", &UWillowSavedMove::CompressedFlags)
        .def("SetMoveFor", &UWillowSavedMove::SetMoveFor)
        .def("CanCombineWith", &UWillowSavedMove::CanCombineWith)
        .def("Clear", &UWillowSavedMove::Clear)
        .staticmethod("StaticClass")
  ;
}