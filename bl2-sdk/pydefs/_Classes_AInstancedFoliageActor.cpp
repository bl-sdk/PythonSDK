#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AInstancedFoliageActor(py::module &m)
{
    py::class_< AInstancedFoliageActor,  AActor   >(m, "AInstancedFoliageActor")
		.def_static("StaticClass", &AInstancedFoliageActor::StaticClass, py::return_value_policy::reference)
        .def_readwrite("FoliageMeshes", &AInstancedFoliageActor::FoliageMeshes)
          ;
}