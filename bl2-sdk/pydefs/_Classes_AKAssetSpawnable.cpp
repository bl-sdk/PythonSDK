#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AKAssetSpawnable(py::module &m)
{
    py::class_< AKAssetSpawnable,  AKAsset   >(m, "AKAssetSpawnable")
		.def_static("StaticClass", &AKAssetSpawnable::StaticClass, py::return_value_policy::reference)
          ;
}