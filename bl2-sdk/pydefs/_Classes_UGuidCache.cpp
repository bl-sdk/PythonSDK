#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGuidCache()
{
    py::class_< UGuidCache,  UObject   >("UGuidCache")
        .def_readonly("UnknownData00", &UGuidCache::UnknownData00)
        .def("StaticClass", &UGuidCache::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}