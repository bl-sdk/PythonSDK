#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerDetailsGFxObject(py::module &m)
{
    py::class_< UPlayerDetailsGFxObject,  UGFxObject   >(m, "UPlayerDetailsGFxObject")
        .def("StaticClass", &UPlayerDetailsGFxObject::StaticClass, py::return_value_policy::reference)
        .def("SetClickHandler", &UPlayerDetailsGFxObject::SetClickHandler)
        .def("NavigateDown", &UPlayerDetailsGFxObject::NavigateDown)
        .def("NavigateUp", &UPlayerDetailsGFxObject::NavigateUp)
        .def("FocusFirstButton", &UPlayerDetailsGFxObject::FocusFirstButton)
        .def("ConfigureButton", &UPlayerDetailsGFxObject::ConfigureButton)
        .def("SetClassIconPath", &UPlayerDetailsGFxObject::SetClassIconPath)
        .def("SetMatchIconAndText", &UPlayerDetailsGFxObject::SetMatchIconAndText)
        .def("SetMissionText", &UPlayerDetailsGFxObject::SetMissionText)
        .def("SetPlaythroughText", &UPlayerDetailsGFxObject::SetPlaythroughText)
        .def("SetClassText", &UPlayerDetailsGFxObject::SetClassText)
        .def("SetGamertag", &UPlayerDetailsGFxObject::SetGamertag)
        .def("Hide", &UPlayerDetailsGFxObject::Hide)
        .def("Show", &UPlayerDetailsGFxObject::Show)
          ;
}