#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIControllerLocator(py::module &m)
{
    py::class_< UIControllerLocator,  UInterface   >(m, "UIControllerLocator")
		.def_static("StaticClass", &UIControllerLocator::StaticClass, py::return_value_policy::reference)
        .def("GetAWillowMind", &UIControllerLocator::GetAWillowMind, py::return_value_policy::reference)
        .def("GetAWillowPlayerController", &UIControllerLocator::GetAWillowPlayerController, py::return_value_policy::reference)
        .def("GetABaseController", &UIControllerLocator::GetABaseController, py::return_value_policy::reference)
          ;
}