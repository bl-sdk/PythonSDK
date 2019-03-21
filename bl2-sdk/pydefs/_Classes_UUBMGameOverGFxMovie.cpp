#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUBMGameOverGFxMovie()
{
    class_< UUBMGameOverGFxMovie, bases< UWillowGFxMovie >  , boost::noncopyable>("UUBMGameOverGFxMovie", no_init)
        .def_readwrite("GameOverClip", &UUBMGameOverGFxMovie::GameOverClip)
        .def("StaticClass", &UUBMGameOverGFxMovie::StaticClass, return_value_policy< reference_existing_object >())
        .def("extEnableGameOverScreenInput", &UUBMGameOverGFxMovie::extEnableGameOverScreenInput)
        .def("extGameOverClipReady", &UUBMGameOverGFxMovie::extGameOverClipReady)
        .def("PopulatePlayerInfo", &UUBMGameOverGFxMovie::PopulatePlayerInfo)
        .def("HandleInputKey", &UUBMGameOverGFxMovie::HandleInputKey)
        .def("eventStart", &UUBMGameOverGFxMovie::eventStart)
        .staticmethod("StaticClass")
  ;
}