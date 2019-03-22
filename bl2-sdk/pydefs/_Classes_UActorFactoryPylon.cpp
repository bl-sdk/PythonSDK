#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryPylon(py::module &m)
{
    py::class_< UActorFactoryPylon,  UActorFactory   >(m, "UActorFactoryPylon")
          ;
}