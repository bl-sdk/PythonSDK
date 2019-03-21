#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGrenadeModPartBehaviorSequenceStateData(py::object m)
{
    py::class_< FGrenadeModPartBehaviorSequenceStateData >(m, "FGrenadeModPartBehaviorSequenceStateData")
        .def_readwrite("Action", &FGrenadeModPartBehaviorSequenceStateData::Action)
        .def_readwrite("SequenceName", &FGrenadeModPartBehaviorSequenceStateData::SequenceName)
  ;
}