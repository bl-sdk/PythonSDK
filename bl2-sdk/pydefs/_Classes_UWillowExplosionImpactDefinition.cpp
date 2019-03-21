#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowExplosionImpactDefinition(py::object m)
{
    py::class_< UWillowExplosionImpactDefinition,  UWillowImpactDefinition   >(m, "UWillowExplosionImpactDefinition")
        .def("StaticClass", &UWillowExplosionImpactDefinition::StaticClass, py::return_value_policy::reference)
          ;
}