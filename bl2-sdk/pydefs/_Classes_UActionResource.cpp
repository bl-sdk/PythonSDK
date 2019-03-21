#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActionResource(py::object m)
{
    py::class_< UActionResource,  UObject   >(m, "UActionResource")
        .def("StaticClass", &UActionResource::StaticClass, py::return_value_policy::reference)
          ;
}