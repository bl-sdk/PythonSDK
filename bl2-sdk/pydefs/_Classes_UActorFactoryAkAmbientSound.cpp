#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryAkAmbientSound(py::module &m)
{
    py::class_< UActorFactoryAkAmbientSound,  UActorFactory   >(m, "UActorFactoryAkAmbientSound")
		.def_static("StaticClass", &UActorFactoryAkAmbientSound::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AmbientEvent", &UActorFactoryAkAmbientSound::AmbientEvent)
          ;
}