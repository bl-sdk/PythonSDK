#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDebugCameraInput()
{
    class_< UDebugCameraInput, bases< UPlayerInput >  , boost::noncopyable>("UDebugCameraInput", no_init)
        .def("StaticClass", &UDebugCameraInput::StaticClass, return_value_policy< reference_existing_object >())
        .def("InputKey", &UDebugCameraInput::InputKey)
        .staticmethod("StaticClass")
  ;
}