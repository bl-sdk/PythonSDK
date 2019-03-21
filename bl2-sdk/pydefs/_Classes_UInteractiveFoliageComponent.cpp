#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInteractiveFoliageComponent(py::object m)
{
    py::class_< UInteractiveFoliageComponent,  UStaticMeshComponent   >(m, "UInteractiveFoliageComponent")
        .def_readwrite("FoliageSceneProxy", &UInteractiveFoliageComponent::FoliageSceneProxy)
        .def("StaticClass", &UInteractiveFoliageComponent::StaticClass, py::return_value_policy::reference)
          ;
}