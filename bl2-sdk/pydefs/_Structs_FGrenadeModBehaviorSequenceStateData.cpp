#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGrenadeModBehaviorSequenceStateData()
{
    class_< FGrenadeModBehaviorSequenceStateData >("FGrenadeModBehaviorSequenceStateData", no_init)
        .def_readwrite("Action", &FGrenadeModBehaviorSequenceStateData::Action)
        .def_readwrite("SequenceName", &FGrenadeModBehaviorSequenceStateData::SequenceName)
  ;
}