#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_SeamlessTravelComplete()
{
    class_< USeqEvent_SeamlessTravelComplete, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_SeamlessTravelComplete", no_init)
        .def("StaticClass", &USeqEvent_SeamlessTravelComplete::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}