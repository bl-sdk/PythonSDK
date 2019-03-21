#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_AnimNotify()
{
    class_< USeqEvent_AnimNotify, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_AnimNotify", no_init)
        .def_readwrite("NotifyName", &USeqEvent_AnimNotify::NotifyName)
        .def("StaticClass", &USeqEvent_AnimNotify::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}