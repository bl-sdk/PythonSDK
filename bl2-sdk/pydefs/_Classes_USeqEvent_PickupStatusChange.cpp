#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_PickupStatusChange()
{
    class_< USeqEvent_PickupStatusChange, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_PickupStatusChange", no_init)
        .def("StaticClass", &USeqEvent_PickupStatusChange::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}