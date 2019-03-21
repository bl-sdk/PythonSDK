#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimMetaData()
{
    py::class_< UAnimMetaData,  UObject   >("UAnimMetaData")
        .def("StaticClass", &UAnimMetaData::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}