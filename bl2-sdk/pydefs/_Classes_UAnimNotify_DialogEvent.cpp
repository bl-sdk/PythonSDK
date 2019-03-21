#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNotify_DialogEvent()
{
    class_< UAnimNotify_DialogEvent, bases< UAnimNotify >  , boost::noncopyable>("UAnimNotify_DialogEvent", no_init)
        .def_readwrite("EventTag", &UAnimNotify_DialogEvent::EventTag)
        .def_readwrite("Group", &UAnimNotify_DialogEvent::Group)
        .def("StaticClass", &UAnimNotify_DialogEvent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}