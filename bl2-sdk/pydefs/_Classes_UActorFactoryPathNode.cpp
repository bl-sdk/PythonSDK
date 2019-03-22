#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryPathNode(py::module &m)
{
    py::class_< UActorFactoryPathNode,  UActorFactory   >(m, "UActorFactoryPathNode")
          ;
}