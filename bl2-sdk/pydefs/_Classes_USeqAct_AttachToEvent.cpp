#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_AttachToEvent()
{
    class_< USeqAct_AttachToEvent, bases< USequenceAction >  , boost::noncopyable>("USeqAct_AttachToEvent", no_init)
        .def("StaticClass", &USeqAct_AttachToEvent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}