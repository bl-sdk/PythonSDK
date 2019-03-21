#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_SetFlight()
{
    class_< UAction_SetFlight, bases< UWillowActionSequencePawn >  , boost::noncopyable>("UAction_SetFlight", no_init)
        .def_readwrite("Mode", &UAction_SetFlight::Mode)
        .def_readwrite("Anim", &UAction_SetFlight::Anim)
        .def_readwrite("LandPos", &UAction_SetFlight::LandPos)
        .def("StaticClass", &UAction_SetFlight::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventStart", &UAction_SetFlight::eventStart)
        .def("eventCanRun", &UAction_SetFlight::eventCanRun)
        .staticmethod("StaticClass")
  ;
}