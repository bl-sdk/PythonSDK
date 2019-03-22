#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryClone(py::module &m)
{
    py::class_< UActorFactoryClone,  UActorFactory   >(m, "UActorFactoryClone")
        .def_readwrite("CloneArchetype", &UActorFactoryClone::CloneArchetype)
        .def_readwrite("NewCloneTag", &UActorFactoryClone::NewCloneTag)
        .def("StaticClass", &UActorFactoryClone::StaticClass, py::return_value_policy::reference)
          ;
}