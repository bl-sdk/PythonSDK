#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryActor()
{
    py::class_< UActorFactoryActor,  UActorFactory   >("UActorFactoryActor")
        .def_readwrite("ActorClass", &UActorFactoryActor::ActorClass)
        .def("StaticClass", &UActorFactoryActor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}