#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_WorldDiscoveryArea()
{
    class_< USeqEvent_WorldDiscoveryArea, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_WorldDiscoveryArea", no_init)
        .def("StaticClass", &USeqEvent_WorldDiscoveryArea::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}