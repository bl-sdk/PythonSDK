#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstBehaviors()
{
    class_< UInterpTrackInstBehaviors, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstBehaviors", no_init)
        .def_readwrite("VfTable_IIBehaviorConsumer", &UInterpTrackInstBehaviors::VfTable_IIBehaviorConsumer)
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstBehaviors::LastUpdatePosition)
        .def_readwrite("ConsumerHandle", &UInterpTrackInstBehaviors::ConsumerHandle)
        .def("StaticClass", &UInterpTrackInstBehaviors::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetBehaviorConsumerHandle", &UInterpTrackInstBehaviors::GetBehaviorConsumerHandle)
        .staticmethod("StaticClass")
  ;
}