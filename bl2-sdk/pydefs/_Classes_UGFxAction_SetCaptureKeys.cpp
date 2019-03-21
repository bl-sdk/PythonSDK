#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxAction_SetCaptureKeys()
{
    class_< UGFxAction_SetCaptureKeys, bases< USequenceAction >  , boost::noncopyable>("UGFxAction_SetCaptureKeys", no_init)
        .def_readwrite("Movie", &UGFxAction_SetCaptureKeys::Movie)
        .def_readwrite("CaptureKeys", &UGFxAction_SetCaptureKeys::CaptureKeys)
        .def("StaticClass", &UGFxAction_SetCaptureKeys::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}