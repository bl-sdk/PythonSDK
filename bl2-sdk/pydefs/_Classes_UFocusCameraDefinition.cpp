#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFocusCameraDefinition()
{
    class_< UFocusCameraDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UFocusCameraDefinition", no_init)
        .def_readwrite("CamReturnTime", &UFocusCameraDefinition::CamReturnTime)
        .def_readwrite("CamMovementThreshold", &UFocusCameraDefinition::CamMovementThreshold)
        .def_readwrite("CamMovementSpeed_Fast", &UFocusCameraDefinition::CamMovementSpeed_Fast)
        .def_readwrite("CamMovementSpeed_Slow", &UFocusCameraDefinition::CamMovementSpeed_Slow)
        .def("StaticClass", &UFocusCameraDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}