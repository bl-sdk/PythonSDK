#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInputBindingsClipGFxObject()
{
    class_< UInputBindingsClipGFxObject, bases< UGFxObject >  , boost::noncopyable>("UInputBindingsClipGFxObject", no_init)
        .def("StaticClass", &UInputBindingsClipGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetCustomizeTip", &UInputBindingsClipGFxObject::SetCustomizeTip)
        .def("AddKeyData", &UInputBindingsClipGFxObject::AddKeyData, return_value_policy< reference_existing_object >())
        .def("EmptyKeyData", &UInputBindingsClipGFxObject::EmptyKeyData)
        .def("InvalidateKeyData", &UInputBindingsClipGFxObject::InvalidateKeyData)
        .def("SetKeybindMode", &UInputBindingsClipGFxObject::SetKeybindMode)
        .def("SetControllerMode", &UInputBindingsClipGFxObject::SetControllerMode)
        .def("_SetVisible", &UInputBindingsClipGFxObject::_SetVisible)
        .def("Hide", &UInputBindingsClipGFxObject::Hide)
        .def("Show", &UInputBindingsClipGFxObject::Show)
        .staticmethod("StaticClass")
  ;
}