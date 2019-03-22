#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UApexGenericAsset(py::module &m)
{
    py::class_< UApexGenericAsset,  UApexAsset   >(m, "UApexGenericAsset")
        .def_readwrite("MApexAsset", &UApexGenericAsset::MApexAsset)
        .def("StaticClass", &UApexGenericAsset::StaticClass, py::return_value_policy::reference)
          ;
}