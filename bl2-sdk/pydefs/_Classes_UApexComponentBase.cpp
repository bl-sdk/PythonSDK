#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UApexComponentBase(py::module &m)
{
    py::class_< UApexComponentBase,  UMeshComponent   >(m, "UApexComponentBase")
        .def_readwrite("ComponentBaseResources", &UApexComponentBase::ComponentBaseResources)
        .def_readwrite("ReleaseResourcesFence", &UApexComponentBase::ReleaseResourcesFence)
        .def_readwrite("Asset", &UApexComponentBase::Asset)
        .def_readwrite("WireframeColor", &UApexComponentBase::WireframeColor)
        .def("StaticClass", &UApexComponentBase::StaticClass, py::return_value_policy::reference)
          ;
}