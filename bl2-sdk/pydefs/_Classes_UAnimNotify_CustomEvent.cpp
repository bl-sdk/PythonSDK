#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNotify_CustomEvent()
{
    class_< UAnimNotify_CustomEvent, bases< UAnimNotify >  , boost::noncopyable>("UAnimNotify_CustomEvent", no_init)
        .def_readwrite("CustomEventName", &UAnimNotify_CustomEvent::CustomEventName)
        .def("StaticClass", &UAnimNotify_CustomEvent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}