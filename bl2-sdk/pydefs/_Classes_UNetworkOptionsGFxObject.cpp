#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNetworkOptionsGFxObject()
{
    class_< UNetworkOptionsGFxObject, bases< UGFxObject >  , boost::noncopyable>("UNetworkOptionsGFxObject", no_init)
        .def("StaticClass", &UNetworkOptionsGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetClickHandler", &UNetworkOptionsGFxObject::SetClickHandler)
        .def("NavigateDown", &UNetworkOptionsGFxObject::NavigateDown)
        .def("NavigateUp", &UNetworkOptionsGFxObject::NavigateUp)
        .def("FocusFirstButton", &UNetworkOptionsGFxObject::FocusFirstButton)
        .def("ConfigureButton", &UNetworkOptionsGFxObject::ConfigureButton)
        .def("SetCurrentNetworkType", &UNetworkOptionsGFxObject::SetCurrentNetworkType)
        .def("Hide", &UNetworkOptionsGFxObject::Hide)
        .def("Show", &UNetworkOptionsGFxObject::Show)
        .staticmethod("StaticClass")
  ;
}