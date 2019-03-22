#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBiasedGoalActor(py::module &m)
{
    py::class_< FBiasedGoalActor >(m, "FBiasedGoalActor")
        .def_readwrite("Goal", &FBiasedGoalActor::Goal)
        .def_readwrite("ExtraCost", &FBiasedGoalActor::ExtraCost)
  ;
}