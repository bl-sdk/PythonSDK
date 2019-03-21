#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FReplicatedCoordinatedEffect()
{
    class_< FReplicatedCoordinatedEffect >("FReplicatedCoordinatedEffect", no_init)
        .def_readwrite("Effects", &FReplicatedCoordinatedEffect::Effects)
        .def_readwrite("Targets", &FReplicatedCoordinatedEffect::Targets)
  ;
}