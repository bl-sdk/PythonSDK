#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FActorToLookAt()
{
    class_< FActorToLookAt >("FActorToLookAt", no_init)
        .def_readwrite("Actor", &FActorToLookAt::Actor)
        .def_readwrite("Rating", &FActorToLookAt::Rating)
        .def_readwrite("EnteredTime", &FActorToLookAt::EnteredTime)
        .def_readwrite("LastKnownDistance", &FActorToLookAt::LastKnownDistance)
        .def_readwrite("StartTimeBeingLookedAt", &FActorToLookAt::StartTimeBeingLookedAt)
  ;
}