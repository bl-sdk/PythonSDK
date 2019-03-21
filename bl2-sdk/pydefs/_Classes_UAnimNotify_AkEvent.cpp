#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNotify_AkEvent()
{
    class_< UAnimNotify_AkEvent, bases< UAnimNotify >  , boost::noncopyable>("UAnimNotify_AkEvent", no_init)
        .def_readwrite("AkEvent", &UAnimNotify_AkEvent::AkEvent)
        .def_readwrite("BoneName", &UAnimNotify_AkEvent::BoneName)
        .def("StaticClass", &UAnimNotify_AkEvent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}