#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGrenadeModBehaviorSequenceStateData()
{
    py::class_< FGrenadeModBehaviorSequenceStateData >("FGrenadeModBehaviorSequenceStateData")
        .def_readwrite("Action", &FGrenadeModBehaviorSequenceStateData::Action)
        .def_readwrite("SequenceName", &FGrenadeModBehaviorSequenceStateData::SequenceName)
  ;
}