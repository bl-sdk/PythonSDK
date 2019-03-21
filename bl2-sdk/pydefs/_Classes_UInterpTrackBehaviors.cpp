#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackBehaviors()
{
    class_< UInterpTrackBehaviors, bases< UInterpTrack >  , boost::noncopyable>("UInterpTrackBehaviors", no_init)
        .def_readwrite("VfTable_IIConstructObject", &UInterpTrackBehaviors::VfTable_IIConstructObject)
        .def_readwrite("VfTable_IIBehaviorProvider", &UInterpTrackBehaviors::VfTable_IIBehaviorProvider)
        .def_readwrite("LastAddedKeyFrameName", &UInterpTrackBehaviors::LastAddedKeyFrameName)
        .def_readwrite("BehaviorEvents", &UInterpTrackBehaviors::BehaviorEvents)
        .def_readwrite("BehaviorProviderDefinition", &UInterpTrackBehaviors::BehaviorProviderDefinition)
        .def("StaticClass", &UInterpTrackBehaviors::StaticClass, return_value_policy< reference_existing_object >())
        .def("BehaviorKeyFrameEvent", &UInterpTrackBehaviors::BehaviorKeyFrameEvent)
        .def("SetBehaviorProviderDefinition", &UInterpTrackBehaviors::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UInterpTrackBehaviors::GetBehaviorProviderDefinition, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}