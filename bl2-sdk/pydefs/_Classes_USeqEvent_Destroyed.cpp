#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_Destroyed()
{
    class_< USeqEvent_Destroyed, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_Destroyed", no_init)
        .def("StaticClass", &USeqEvent_Destroyed::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}