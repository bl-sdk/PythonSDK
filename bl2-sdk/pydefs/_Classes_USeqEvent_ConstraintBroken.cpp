#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_ConstraintBroken()
{
    class_< USeqEvent_ConstraintBroken, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_ConstraintBroken", no_init)
        .def("StaticClass", &USeqEvent_ConstraintBroken::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}