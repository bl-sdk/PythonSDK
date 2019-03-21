#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_CompleteMission()
{
    class_< UWillowSeqAct_CompleteMission, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_CompleteMission", no_init)
        .def_readwrite("AssociatedMission", &UWillowSeqAct_CompleteMission::AssociatedMission)
        .def("StaticClass", &UWillowSeqAct_CompleteMission::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}