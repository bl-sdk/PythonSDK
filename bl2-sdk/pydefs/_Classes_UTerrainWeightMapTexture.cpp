#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTerrainWeightMapTexture()
{
    py::class_< UTerrainWeightMapTexture,  UTexture2D   >("UTerrainWeightMapTexture")
        .def("StaticClass", &UTerrainWeightMapTexture::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}