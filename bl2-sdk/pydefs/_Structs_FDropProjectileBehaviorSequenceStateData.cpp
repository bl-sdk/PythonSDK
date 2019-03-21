#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDropProjectileBehaviorSequenceStateData()
{
    py::class_< FDropProjectileBehaviorSequenceStateData >("FDropProjectileBehaviorSequenceStateData")
        .def_readwrite("Action", &FDropProjectileBehaviorSequenceStateData::Action)
        .def_readwrite("SequenceName", &FDropProjectileBehaviorSequenceStateData::SequenceName)
  ;
}