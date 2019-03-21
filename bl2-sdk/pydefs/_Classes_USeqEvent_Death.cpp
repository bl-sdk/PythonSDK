#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_Death()
{
    class_< USeqEvent_Death, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_Death", no_init)
        .def("StaticClass", &USeqEvent_Death::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}