#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_AllSpawned()
{
    class_< USeqEvent_AllSpawned, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_AllSpawned", no_init)
        .def("StaticClass", &USeqEvent_AllSpawned::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}