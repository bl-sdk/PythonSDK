#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryPathNode(py::object m)
{
    py::class_< UActorFactoryPathNode,  UActorFactory   >(m, "UActorFactoryPathNode")
        .def("StaticClass", &UActorFactoryPathNode::StaticClass, py::return_value_policy::reference)
          ;
}