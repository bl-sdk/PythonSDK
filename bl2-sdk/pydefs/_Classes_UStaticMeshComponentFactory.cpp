#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStaticMeshComponentFactory(py::module &m)
{
    py::class_< UStaticMeshComponentFactory,  UPrimitiveComponentFactory   >(m, "UStaticMeshComponentFactory")
		.def_static("StaticClass", &UStaticMeshComponentFactory::StaticClass, py::return_value_policy::reference)
        .def_readwrite("StaticMesh", &UStaticMeshComponentFactory::StaticMesh)
        .def_readwrite("Materials", &UMeshComponentFactory::Materials)
          ;
}