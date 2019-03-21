#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_PlayerSpawned()
{
    class_< USeqEvent_PlayerSpawned, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_PlayerSpawned", no_init)
        .def_readwrite("SpawnPoint", &USeqEvent_PlayerSpawned::SpawnPoint)
        .def("StaticClass", &USeqEvent_PlayerSpawned::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}