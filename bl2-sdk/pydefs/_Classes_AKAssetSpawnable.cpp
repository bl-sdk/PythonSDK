#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AKAssetSpawnable(py::object m)
{
    py::class_< AKAssetSpawnable,  AKAsset   >(m, "AKAssetSpawnable")
        .def("StaticClass", &AKAssetSpawnable::StaticClass, py::return_value_policy::reference)
          ;
}