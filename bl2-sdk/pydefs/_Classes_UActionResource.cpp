#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActionResource()
{
    py::class_< UActionResource,  UObject   >("UActionResource")
        .def("StaticClass", &UActionResource::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}