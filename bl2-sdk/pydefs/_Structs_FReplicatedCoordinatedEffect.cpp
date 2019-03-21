#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedCoordinatedEffect()
{
    py::class_< FReplicatedCoordinatedEffect >("FReplicatedCoordinatedEffect")
        .def_readwrite("Effects", &FReplicatedCoordinatedEffect::Effects)
        .def_readwrite("Targets", &FReplicatedCoordinatedEffect::Targets)
  ;
}