#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDropProjectileBehaviorSequenceStateData(py::object m)
{
    py::class_< FDropProjectileBehaviorSequenceStateData >(m, "FDropProjectileBehaviorSequenceStateData")
        .def_readwrite("Action", &FDropProjectileBehaviorSequenceStateData::Action)
        .def_readwrite("SequenceName", &FDropProjectileBehaviorSequenceStateData::SequenceName)
  ;
}