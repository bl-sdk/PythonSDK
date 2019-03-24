#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryActor(py::module &m)
{
    py::class_< UActorFactoryActor,  UActorFactory   >(m, "UActorFactoryActor")
		.def_static("StaticClass", &UActorFactoryActor::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ActorClass", &UActorFactoryActor::ActorClass)
          ;
}