#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_RemoteCustomEvent()
{
    class_< UBehavior_RemoteCustomEvent, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_RemoteCustomEvent", no_init)
        .def_readwrite("SequenceProvider", &UBehavior_RemoteCustomEvent::SequenceProvider)
        .def_readwrite("ProviderDefinitionPathName", &UBehavior_RemoteCustomEvent::ProviderDefinitionPathName)
        .def_readwrite("CustomEventName", &UBehavior_RemoteCustomEvent::CustomEventName)
        .def("StaticClass", &UBehavior_RemoteCustomEvent::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_RemoteCustomEvent::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}