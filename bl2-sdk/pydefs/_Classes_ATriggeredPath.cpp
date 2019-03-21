#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ATriggeredPath()
{
    class_< ATriggeredPath, bases< ANavigationPoint >  , boost::noncopyable>("ATriggeredPath", no_init)
        .def_readwrite("MyTrigger", &ATriggeredPath::MyTrigger)
        .def("StaticClass", &ATriggeredPath::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventSuggestMovePreparation", &ATriggeredPath::eventSuggestMovePreparation)
        .def("eventSpecialHandling", &ATriggeredPath::eventSpecialHandling, return_value_policy< reference_existing_object >())
        .def("OnToggle", &ATriggeredPath::OnToggle)
        .staticmethod("StaticClass")
  ;
}