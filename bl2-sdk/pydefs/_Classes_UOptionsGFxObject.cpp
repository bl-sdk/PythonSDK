#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOptionsGFxObject()
{
    class_< UOptionsGFxObject, bases< UGFxObject >  , boost::noncopyable>("UOptionsGFxObject", no_init)
        .def("StaticClass", &UOptionsGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetDescription", &UOptionsGFxObject::SetDescription)
        .def("SetTooltips", &UOptionsGFxObject::SetTooltips)
        .def("SetPlayerName", &UOptionsGFxObject::SetPlayerName)
        .def("SetHeader", &UOptionsGFxObject::SetHeader)
        .def("SetAspectRatio", &UOptionsGFxObject::SetAspectRatio)
        .staticmethod("StaticClass")
  ;
}