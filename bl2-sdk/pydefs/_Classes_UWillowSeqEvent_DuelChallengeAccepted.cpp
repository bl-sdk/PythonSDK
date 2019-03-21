#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_DuelChallengeAccepted()
{
    class_< UWillowSeqEvent_DuelChallengeAccepted, bases< USequenceEvent >  , boost::noncopyable>("UWillowSeqEvent_DuelChallengeAccepted", no_init)
        .def("StaticClass", &UWillowSeqEvent_DuelChallengeAccepted::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}