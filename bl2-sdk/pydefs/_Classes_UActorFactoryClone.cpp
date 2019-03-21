#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryClone()
{
    py::class_< UActorFactoryClone,  UActorFactory   >("UActorFactoryClone")
        .def_readwrite("CloneArchetype", &UActorFactoryClone::CloneArchetype)
        .def_readwrite("NewCloneTag", &UActorFactoryClone::NewCloneTag)
        .def("StaticClass", &UActorFactoryClone::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}