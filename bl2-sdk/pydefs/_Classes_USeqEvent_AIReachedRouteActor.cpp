#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_AIReachedRouteActor()
{
    class_< USeqEvent_AIReachedRouteActor, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_AIReachedRouteActor", no_init)
        .def("StaticClass", &USeqEvent_AIReachedRouteActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}