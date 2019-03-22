#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UApexAsset(py::module &m)
{
    py::class_< UApexAsset,  UObject   >(m, "UApexAsset")
        .def_readwrite("OriginalApexName", &UApexAsset::OriginalApexName)
        .def_readwrite("ApexComponents", &UApexAsset::ApexComponents)
          ;
}