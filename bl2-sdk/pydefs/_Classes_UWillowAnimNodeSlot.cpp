#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeSlot(py::module &m)
{
    py::class_< UWillowAnimNodeSlot,  UAnimNodeSlot   >(m, "UWillowAnimNodeSlot")
		.def_static("StaticClass", &UWillowAnimNodeSlot::StaticClass, py::return_value_policy::reference)
        .def("StopCustomAnimationOnLastFrame", &UWillowAnimNodeSlot::StopCustomAnimationOnLastFrame)
          ;
}