#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPrimitiveComponentFactory(py::object m)
{
    py::class_< UPrimitiveComponentFactory,  UObject   >(m, "UPrimitiveComponentFactory")
        .def("StaticClass", &UPrimitiveComponentFactory::StaticClass, py::return_value_policy::reference)
          ;
}