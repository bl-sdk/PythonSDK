#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryActor(py::module &m)
{
    py::class_< UActorFactoryActor,  UActorFactory   >(m, "UActorFactoryActor")
        .def_readwrite("ActorClass", &UActorFactoryActor::ActorClass)
          ;
}