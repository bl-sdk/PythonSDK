#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ACharacterSelectCameraActor()
{
    class_< ACharacterSelectCameraActor, bases< ACameraActor >  , boost::noncopyable>("ACharacterSelectCameraActor", no_init)
        .def("StaticClass", &ACharacterSelectCameraActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}