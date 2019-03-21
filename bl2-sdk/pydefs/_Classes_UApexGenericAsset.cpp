#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UApexGenericAsset()
{
    py::class_< UApexGenericAsset,  UApexAsset   >("UApexGenericAsset")
        .def_readwrite("MApexAsset", &UApexGenericAsset::MApexAsset)
        .def("StaticClass", &UApexGenericAsset::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}