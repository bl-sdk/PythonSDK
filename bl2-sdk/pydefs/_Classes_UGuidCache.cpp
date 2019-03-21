#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGuidCache(py::object m)
{
    py::class_< UGuidCache,  UObject   >(m, "UGuidCache")
        .def_readonly("UnknownData00", &UGuidCache::UnknownData00)
        .def("StaticClass", &UGuidCache::StaticClass, py::return_value_policy::reference)
          ;
}