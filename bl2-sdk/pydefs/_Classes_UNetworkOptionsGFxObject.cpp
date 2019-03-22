#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNetworkOptionsGFxObject(py::module &m)
{
    py::class_< UNetworkOptionsGFxObject,  UGFxObject   >(m, "UNetworkOptionsGFxObject")
        .def("StaticClass", &UNetworkOptionsGFxObject::StaticClass, py::return_value_policy::reference)
        .def("SetClickHandler", &UNetworkOptionsGFxObject::SetClickHandler)
        .def("NavigateDown", &UNetworkOptionsGFxObject::NavigateDown)
        .def("NavigateUp", &UNetworkOptionsGFxObject::NavigateUp)
        .def("FocusFirstButton", &UNetworkOptionsGFxObject::FocusFirstButton)
        .def("ConfigureButton", &UNetworkOptionsGFxObject::ConfigureButton)
        .def("SetCurrentNetworkType", &UNetworkOptionsGFxObject::SetCurrentNetworkType)
        .def("Hide", &UNetworkOptionsGFxObject::Hide)
        .def("Show", &UNetworkOptionsGFxObject::Show)
          ;
}