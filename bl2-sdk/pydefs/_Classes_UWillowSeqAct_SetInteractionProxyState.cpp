#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_SetInteractionProxyState()
{
    class_< UWillowSeqAct_SetInteractionProxyState, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_SetInteractionProxyState", no_init)
        .def("StaticClass", &UWillowSeqAct_SetInteractionProxyState::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventOnActivated", &UWillowSeqAct_SetInteractionProxyState::eventOnActivated)
        .staticmethod("StaticClass")
  ;
}