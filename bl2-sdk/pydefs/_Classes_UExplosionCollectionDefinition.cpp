#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UExplosionCollectionDefinition(py::module &m)
{
    py::class_< UExplosionCollectionDefinition,  UGBXDefinition   >(m, "UExplosionCollectionDefinition")
        .def_readwrite("Explosions", &UExplosionCollectionDefinition::Explosions)
        .def("GetExplosion", &UExplosionCollectionDefinition::GetExplosion, py::return_value_policy::reference)
          ;
}