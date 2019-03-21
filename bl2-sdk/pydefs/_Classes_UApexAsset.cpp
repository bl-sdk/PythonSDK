#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UApexAsset()
{
    py::class_< UApexAsset,  UObject   >("UApexAsset")
        .def_readwrite("OriginalApexName", &UApexAsset::OriginalApexName)
        .def_readwrite("ApexComponents", &UApexAsset::ApexComponents)
        .def("StaticClass", &UApexAsset::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}