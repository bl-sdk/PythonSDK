#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavigationMeshBase(py::module &m)
{
    py::class_< UNavigationMeshBase,  UObject   >(m, "UNavigationMeshBase")
		.def_static("StaticClass", &UNavigationMeshBase::StaticClass, py::return_value_policy::reference)
          ;
}