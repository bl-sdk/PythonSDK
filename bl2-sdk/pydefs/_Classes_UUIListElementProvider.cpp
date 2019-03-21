#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIListElementProvider()
{
    py::class_< UUIListElementProvider,  UInterface   >("UUIListElementProvider")
        .def("StaticClass", &UUIListElementProvider::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}