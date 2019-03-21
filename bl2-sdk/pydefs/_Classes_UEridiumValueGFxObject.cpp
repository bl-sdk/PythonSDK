#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UEridiumValueGFxObject()
{
    class_< UEridiumValueGFxObject, bases< UValueGFxObject >  , boost::noncopyable>("UEridiumValueGFxObject", no_init)
        .def_readwrite("CurrencyFrames", &UEridiumValueGFxObject::CurrencyFrames)
        .def("StaticClass", &UEridiumValueGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetCurrencyClip", &UEridiumValueGFxObject::SetCurrencyClip)
        .def("SetCurrencyFrame", &UEridiumValueGFxObject::SetCurrencyFrame)
        .def("SetCurrencyType", &UEridiumValueGFxObject::SetCurrencyType)
        .def("SetValue", &UEridiumValueGFxObject::SetValue)
        .staticmethod("StaticClass")
  ;
}