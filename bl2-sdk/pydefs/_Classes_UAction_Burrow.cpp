#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_Burrow()
{
    class_< UAction_Burrow, bases< UWillowActionSequencePawn >  , boost::noncopyable>("UAction_Burrow", no_init)
        .def_readwrite("BurrowEnter", &UAction_Burrow::BurrowEnter)
        .def_readwrite("BurrowExit", &UAction_Burrow::BurrowExit)
        .def("StaticClass", &UAction_Burrow::StaticClass, return_value_policy< reference_existing_object >())
        .def("CheckCloaked", &UAction_Burrow::CheckCloaked)
        .def("SafeToUncloak", &UAction_Burrow::SafeToUncloak)
        .def("ForceUncloak", &UAction_Burrow::ForceUncloak)
        .def("ForceCloak", &UAction_Burrow::ForceCloak)
        .def("CheckStateTransition", &UAction_Burrow::CheckStateTransition)
        .def("eventStart", &UAction_Burrow::eventStart)
        .staticmethod("StaticClass")
  ;
}