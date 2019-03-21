#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAIThrowProjectileBehaviorSequenceStateData()
{
    class_< FAIThrowProjectileBehaviorSequenceStateData >("FAIThrowProjectileBehaviorSequenceStateData", no_init)
        .def_readwrite("Action", &FAIThrowProjectileBehaviorSequenceStateData::Action)
        .def_readwrite("SequenceName", &FAIThrowProjectileBehaviorSequenceStateData::SequenceName)
  ;
}