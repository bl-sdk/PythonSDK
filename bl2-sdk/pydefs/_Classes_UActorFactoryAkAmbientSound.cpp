#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryAkAmbientSound(py::module &m)
{
    py::class_< UActorFactoryAkAmbientSound,  UActorFactory   >(m, "UActorFactoryAkAmbientSound")
        .def_readwrite("AmbientEvent", &UActorFactoryAkAmbientSound::AmbientEvent)
          ;
}