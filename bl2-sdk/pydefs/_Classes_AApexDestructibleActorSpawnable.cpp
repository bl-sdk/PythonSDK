#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AApexDestructibleActorSpawnable(py::module &m)
{
    py::class_< AApexDestructibleActorSpawnable,  AApexDestructibleActor   >(m, "AApexDestructibleActorSpawnable")
          ;
}