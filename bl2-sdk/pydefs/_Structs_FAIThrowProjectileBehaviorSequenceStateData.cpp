#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAIThrowProjectileBehaviorSequenceStateData()
{
    py::class_< FAIThrowProjectileBehaviorSequenceStateData >("FAIThrowProjectileBehaviorSequenceStateData")
        .def_readwrite("Action", &FAIThrowProjectileBehaviorSequenceStateData::Action)
        .def_readwrite("SequenceName", &FAIThrowProjectileBehaviorSequenceStateData::SequenceName)
  ;
}