#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDropProjectileBehaviorSequenceStateData()
{
    class_< FDropProjectileBehaviorSequenceStateData >("FDropProjectileBehaviorSequenceStateData", no_init)
        .def_readwrite("Action", &FDropProjectileBehaviorSequenceStateData::Action)
        .def_readwrite("SequenceName", &FDropProjectileBehaviorSequenceStateData::SequenceName)
  ;
}