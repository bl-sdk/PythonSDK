#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_IsInVolume()
{
    class_< USeqAct_IsInVolume, bases< USequenceAction >  , boost::noncopyable>("USeqAct_IsInVolume", no_init)
        .def_readwrite("Volumes", &USeqAct_IsInVolume::Volumes)
        .def_readwrite("Actors", &USeqAct_IsInVolume::Actors)
        .def("StaticClass", &USeqAct_IsInVolume::StaticClass, return_value_policy< reference_existing_object >())
        .def("ActorIsInAnyVolumes", &USeqAct_IsInVolume::ActorIsInAnyVolumes)
        .staticmethod("StaticClass")
  ;
}