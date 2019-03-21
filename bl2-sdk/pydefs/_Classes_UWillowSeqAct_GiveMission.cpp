#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_GiveMission()
{
    class_< UWillowSeqAct_GiveMission, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_GiveMission", no_init)
        .def_readwrite("AssociatedMission", &UWillowSeqAct_GiveMission::AssociatedMission)
        .def("StaticClass", &UWillowSeqAct_GiveMission::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}