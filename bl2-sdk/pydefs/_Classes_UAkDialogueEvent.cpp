#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAkDialogueEvent()
{
    class_< UAkDialogueEvent, bases< UAkObject >  , boost::noncopyable>("UAkDialogueEvent", no_init)
        .def_readwrite("RequiredBank", &UAkDialogueEvent::RequiredBank)
        .def_readwrite("Arguments", &UAkDialogueEvent::Arguments)
        .def_readwrite("FaceFXAnimSet", &UAkDialogueEvent::FaceFXAnimSet)
        .def("StaticClass", &UAkDialogueEvent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}