#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMeshComponentFactory(py::module &m)
{
    py::class_< UMeshComponentFactory,  UPrimitiveComponentFactory   >(m, "UMeshComponentFactory")
        .def_readwrite("Materials", &UMeshComponentFactory::Materials)
        .def("StaticClass", &UMeshComponentFactory::StaticClass, py::return_value_policy::reference)
          ;
}