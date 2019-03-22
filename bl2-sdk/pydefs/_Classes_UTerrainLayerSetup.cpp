#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTerrainLayerSetup(py::module &m)
{
    py::class_< UTerrainLayerSetup,  UObject   >(m, "UTerrainLayerSetup")
        .def_readwrite("Materials", &UTerrainLayerSetup::Materials)
        .def("StaticClass", &UTerrainLayerSetup::StaticClass, py::return_value_policy::reference)
        .def("PostBeginPlay", &UTerrainLayerSetup::PostBeginPlay)
          ;
}