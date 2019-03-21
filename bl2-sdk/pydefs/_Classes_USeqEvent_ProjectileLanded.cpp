#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_ProjectileLanded()
{
    class_< USeqEvent_ProjectileLanded, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_ProjectileLanded", no_init)
        .def_readwrite("MaxDistance", &USeqEvent_ProjectileLanded::MaxDistance)
        .def("StaticClass", &USeqEvent_ProjectileLanded::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}