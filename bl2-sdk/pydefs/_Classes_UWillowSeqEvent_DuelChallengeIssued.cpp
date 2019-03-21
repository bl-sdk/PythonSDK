#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_DuelChallengeIssued()
{
    class_< UWillowSeqEvent_DuelChallengeIssued, bases< USequenceEvent >  , boost::noncopyable>("UWillowSeqEvent_DuelChallengeIssued", no_init)
        .def("StaticClass", &UWillowSeqEvent_DuelChallengeIssued::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}