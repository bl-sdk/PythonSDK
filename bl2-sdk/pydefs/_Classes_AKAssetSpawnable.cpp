#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AKAssetSpawnable(py::module &m)
{
    py::class_< AKAssetSpawnable,  AKAsset   >(m, "AKAssetSpawnable")
          ;
}