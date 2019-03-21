#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeSlot()
{
    py::class_< UWillowAnimNodeSlot,  UAnimNodeSlot   >("UWillowAnimNodeSlot")
        .def("StaticClass", &UWillowAnimNodeSlot::StaticClass, py::return_value_policy::reference)
        .def("StopCustomAnimationOnLastFrame", &UWillowAnimNodeSlot::StopCustomAnimationOnLastFrame)
        .staticmethod("StaticClass")
  ;
}