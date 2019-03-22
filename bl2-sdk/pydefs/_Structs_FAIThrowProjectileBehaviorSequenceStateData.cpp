#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAIThrowProjectileBehaviorSequenceStateData(py::module &m)
{
    py::class_< FAIThrowProjectileBehaviorSequenceStateData >(m, "FAIThrowProjectileBehaviorSequenceStateData")
        .def_readwrite("Action", &FAIThrowProjectileBehaviorSequenceStateData::Action)
        .def_readwrite("SequenceName", &FAIThrowProjectileBehaviorSequenceStateData::SequenceName)
  ;
}