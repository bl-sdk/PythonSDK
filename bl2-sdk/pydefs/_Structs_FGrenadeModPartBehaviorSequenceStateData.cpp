#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGrenadeModPartBehaviorSequenceStateData()
{
    py::class_< FGrenadeModPartBehaviorSequenceStateData >("FGrenadeModPartBehaviorSequenceStateData")
        .def_readwrite("Action", &FGrenadeModPartBehaviorSequenceStateData::Action)
        .def_readwrite("SequenceName", &FGrenadeModPartBehaviorSequenceStateData::SequenceName)
  ;
}