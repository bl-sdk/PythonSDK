#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULineBatchComponent()
{
    py::class_< ULineBatchComponent,  UPrimitiveComponent   >("ULineBatchComponent")
        .def_readwrite("FPrimitiveDrawInterfaceVfTable", &ULineBatchComponent::FPrimitiveDrawInterfaceVfTable)
        .def_readwrite("FPrimitiveDrawInterfaceView", &ULineBatchComponent::FPrimitiveDrawInterfaceView)
        .def_readwrite("BatchedLines", &ULineBatchComponent::BatchedLines)
        .def_readwrite("BatchedPoints", &ULineBatchComponent::BatchedPoints)
        .def_readwrite("DefaultLifeTime", &ULineBatchComponent::DefaultLifeTime)
        .def("StaticClass", &ULineBatchComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}