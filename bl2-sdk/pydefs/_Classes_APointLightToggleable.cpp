#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APointLightToggleable()
{
    class_< APointLightToggleable, bases< APointLight >  , boost::noncopyable>("APointLightToggleable", no_init)
        .def("StaticClass", &APointLightToggleable::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyCheckpointRecord", &APointLightToggleable::ApplyCheckpointRecord)
        .def("CreateCheckpointRecord", &APointLightToggleable::CreateCheckpointRecord)
        .def("ShouldSaveForCheckpoint", &APointLightToggleable::ShouldSaveForCheckpoint)
        .staticmethod("StaticClass")
  ;
}