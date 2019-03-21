#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerDetailsGFxObject()
{
    class_< UPlayerDetailsGFxObject, bases< UGFxObject >  , boost::noncopyable>("UPlayerDetailsGFxObject", no_init)
        .def("StaticClass", &UPlayerDetailsGFxObject::StaticClass, return_value_policy< reference_existing_object >())
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
        .staticmethod("StaticClass")
  ;
}