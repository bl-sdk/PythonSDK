#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGrenadeModPartBehaviorSequenceStateData()
{
    class_< FGrenadeModPartBehaviorSequenceStateData >("FGrenadeModPartBehaviorSequenceStateData", no_init)
        .def_readwrite("Action", &FGrenadeModPartBehaviorSequenceStateData::Action)
        .def_readwrite("SequenceName", &FGrenadeModPartBehaviorSequenceStateData::SequenceName)
  ;
}