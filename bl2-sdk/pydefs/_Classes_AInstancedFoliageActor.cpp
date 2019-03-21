#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AInstancedFoliageActor()
{
    py::class_< AInstancedFoliageActor,  AActor   >("AInstancedFoliageActor")
        .def_readwrite("FoliageMeshes", &AInstancedFoliageActor::FoliageMeshes)
        .def("StaticClass", &AInstancedFoliageActor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}